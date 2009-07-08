

! Copyright (C) 2002-2005 J. K. Dewhurst, S. Sharma and C. Ambrosch-Draxl.
! This file is distributed under the terms of the GNU General Public License.
! See the file COPYING for license details.


subroutine hmlalon(hamilton, is, ia, ngp, apwalm)
use modmain
use modinput
use modfvsystem
implicit none
! arguments
type (hermiteanMatrix), intent(inout)::hamilton
integer, intent(in) :: is
integer, intent(in) :: ia
integer, intent(in) :: ngp
complex(8), intent(in) :: apwalm(ngkmax, apwordmax, lmmaxapw, natmtot)


! local variables
integer::ias, io, ilo, i, j, k
integer::l1, l2, l3, m1, m2, m3, lm1, lm2, lm3
complex(8) zsum, zt1
ias=idxas(ia, is)
do ilo=1, nlorb(is)
  l1=lorbl(ilo, is)
  do m1=-l1, l1
    lm1=idxlm(l1, m1)
    i=ngp+idxlo(lm1, ilo, ias)
    do l3=0, input%groundstate%lmaxmat
      do m3=-l3, l3
	lm3=idxlm(l3, m3)
	do io=1, apword(l3, is)
	  zsum=0.d0
	  do l2=0, input%groundstate%lmaxvr
	    if (mod(l1+l2+l3, 2).eq.0) then
	      do m2=-l2, l2
		lm2=idxlm(l2, m2)
		zsum=zsum+gntyry(lm1, lm2, lm3)*hloa(ilo, io, l3, lm2, ias)
	      end do
	    end if
	  end do
	  if (abs(dble(zsum))+abs(aimag(zsum)).gt.1.d-20) then

! calculate the matrix elements
              !k=((i-1)*i)/2
	      do j=1, ngp
                !k=k+1
		zt1=zsum*apwalm(j, io, lm3, ias)

	       call Hermiteanmatrix_indexedupdate(hamilton, i, j, conjg(zt1))
	      end do

	  end if
	end do
      end do
    end do
  end do
end do
return
end subroutine
