

! Copyright (C) 2007 J. K. Dewhurst, S. Sharma and C. Ambrosch-Draxl.
! This file is distributed under the terms of the GNU General Public License.
! See the file COPYING for license details.


subroutine putevalsv(ik, evalsvp)
  use modmain
  use modmpi
  implicit none
  ! arguments
  integer, intent(in) :: ik
  real(8), intent(in) :: evalsvp(nstsv)
    character(256) ::filetag
    character(256), external:: outfilenamestring
  ! local variables

  integer ::recl, koffset
  ! find the record length
  inquire(iolength=recl) vkl(:, ik), nstsv, evalsvp
  !$OMP CRITICAL
  filetag='EVALSV'
  if (splittfile.or.(rank.eq.0))then
  open(70, file = outfilenamestring(filetag, ik), action = 'WRITE', &
       form = 'UNFORMATTED', access = 'DIRECT', recl = recl)
 if (splittfile) then
 koffset=ik-firstk(procofk(ik))+1
 else
 koffset =ik
 endif
write(70, rec=koffset) vkl(:, ik), nstsv, evalsvp
  close(70)

endif
 !$OMP END CRITICAL
  return
end subroutine putevalsv
