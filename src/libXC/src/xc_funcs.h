#define  XC_LDA_X               1  /* Exchange                                                   */
#define  XC_LDA_C_WIGNER        2  /* Wigner parametrization                                     */
#define  XC_LDA_C_RPA           3  /* Random Phase Approximation                                 */
#define  XC_LDA_C_HL            4  /* Hedin & Lundqvist                                          */
#define  XC_LDA_C_GL            5  /* Gunnarson & Lundqvist                                      */
#define  XC_LDA_C_XALPHA        6  /* Slater Xalpha                                              */
#define  XC_LDA_C_VWN           7  /* Vosko, Wilk, & Nussair                                     */
#define  XC_LDA_C_VWN_RPA       8  /* Vosko, Wilk, & Nussair (RPA)                               */
#define  XC_LDA_C_PZ            9  /* Perdew & Zunger                                            */
#define  XC_LDA_C_PZ_MOD       10  /* Perdew & Zunger (Modified)                                 */
#define  XC_LDA_C_OB_PZ        11  /* Ortiz & Ballone (PZ)                                       */
#define  XC_LDA_C_PW           12  /* Perdew & Wang                                              */
#define  XC_LDA_C_PW_MOD       13  /* Perdew & Wang (Modified)                                   */
#define  XC_LDA_C_OB_PW        14  /* Ortiz & Ballone (PW)                                       */
#define  XC_LDA_C_2D_AMGB      15  /* Attacalite et al                                           */
#define  XC_LDA_C_2D_PRM       16  /* Pittalis, Rasanen & Marques correlation in 2D              */
#define  XC_LDA_C_vBH          17  /* von Barth & Hedin                                          */
#define  XC_LDA_C_1D_CSC       18  /* Casula, Sorella, and Senatore 1D correlation               */
#define  XC_LDA_X_2D           19  /* Exchange in 2D                                             */
#define  XC_LDA_XC_TETER93     20  /* Teter 93 parametrization                                   */
#define  XC_LDA_X_1D           21  /* Exchange in 1D                                             */
#define  XC_LDA_C_ML1          22  /* Modified LSD (version 1) of Proynov and Salahub            */
#define  XC_LDA_C_ML2          23  /* Modified LSD (version 2) of Proynov and Salahub            */
#define  XC_GGA_X_PBE         101  /* Perdew, Burke & Ernzerhof exchange                         */
#define  XC_GGA_X_PBE_R       102  /* Perdew, Burke & Ernzerhof exchange (revised)               */
#define  XC_GGA_X_B86         103  /* Becke 86 Xalfa,beta,gamma                                  */
#define  XC_GGA_X_B86_R       104  /* Becke 86 Xalfa,beta,gamma (reoptimized)                    */
#define  XC_GGA_X_B86_MGC     105  /* Becke 86 Xalfa,beta,gamma (with mod. grad. correction)     */
#define  XC_GGA_X_B88         106  /* Becke 88                                                   */
#define  XC_GGA_X_G96         107  /* Gill 96                                                    */
#define  XC_GGA_X_PW86        108  /* Perdew & Wang 86                                           */
#define  XC_GGA_X_PW91        109  /* Perdew & Wang 91                                           */
#define  XC_GGA_X_OPTX        110  /* Handy & Cohen OPTX 01                                      */
#define  XC_GGA_X_DK87_R1     111  /* dePristo & Kress 87 (version R1)                           */
#define  XC_GGA_X_DK87_R2     112  /* dePristo & Kress 87 (version R2)                           */
#define  XC_GGA_X_LG93        113  /* Lacks & Gordon 93                                          */
#define  XC_GGA_X_FT97_A      114  /* Filatov & Thiel 97 (version A)                             */
#define  XC_GGA_X_FT97_B      115  /* Filatov & Thiel 97 (version B)                             */
#define  XC_GGA_X_PBE_SOL     116  /* Perdew, Burke & Ernzerhof exchange (solids)                */
#define  XC_GGA_X_RPBE        117  /* Hammer, Hansen & Norskov (PBE-like)                        */
#define  XC_GGA_X_WC          118  /* Wu & Cohen                                                 */
#define  XC_GGA_X_mPW91       119  /* Modified form of PW91 by Adamo & Barone                    */
#define  XC_GGA_X_AM05        120  /* Armiento & Mattsson 05 exchange                            */
#define  XC_GGA_X_PBEA        121  /* Madsen (PBE-like)                                          */
#define  XC_GGA_X_MPBE        122  /* Adamo & Barone modification to PBE                         */
#define  XC_GGA_X_XPBE        123  /* xPBE reparametrization by Xu & Goddard                     */
#define  XC_GGA_X_2D_B86_MGC  124  /* Becke 86 MGC for 2D systems                                */
#define  XC_GGA_X_BAYESIAN    125  /* Bayesian best fit for the enhancement factor               */
#define  XC_GGA_X_PBE_JSJR    126  /* JSJR reparametrization by Pedroza, Silva & Capelle         */
#define  XC_GGA_X_2D_B88      127  /* Becke 88 in 2D                                             */
#define  XC_GGA_X_2D_B86      128  /* Becke 86 Xalfa,beta,gamma                                  */
#define  XC_GGA_X_2D_PBE      129  /* Perdew, Burke & Ernzerhof exchange in 2D                   */
#define  XC_GGA_C_PBE         130  /* Perdew, Burke & Ernzerhof correlation                      */
#define  XC_GGA_C_LYP         131  /* Lee, Yang & Parr                                           */
#define  XC_GGA_C_P86         132  /* Perdew 86                                                  */
#define  XC_GGA_C_PBE_SOL     133  /* Perdew, Burke & Ernzerhof correlation SOL                  */
#define  XC_GGA_C_PW91        134  /* Perdew & Wang 91                                           */
#define  XC_GGA_C_AM05        135  /* Armiento & Mattsson 05 correlation                         */
#define  XC_GGA_C_XPBE        136  /* xPBE reparametrization by Xu & Goddard                     */
#define  XC_GGA_C_LM          137  /* Langreth and Mehl correlation                              */
#define  XC_GGA_C_PBE_JRGX    138  /* JRGX reparametrization by Pedroza, Silva & Capelle         */
#define  XC_GGA_X_OPTB88_VDW  139  /* Becke 88 reoptimized to be used with vdW functional of Dion et al*/
#define  XC_GGA_X_PBEK1_VDW   140  /* PBE reparametrization for vdW                              */
#define  XC_GGA_X_OPTPBE_VDW  141  /* PBE reparametrization for vdW                              */
#define  XC_GGA_X_RGE2        142  /* Regularized PBE                                            */
#define  XC_GGA_C_RGE2        143  /* Regularized PBE                                            */
#define  XC_GGA_XC_LB         160  /* van Leeuwen & Baerends                                     */
#define  XC_GGA_XC_HCTH_93    161  /* HCTH functional fitted to  93 molecules                    */
#define  XC_GGA_XC_HCTH_120   162  /* HCTH functional fitted to 120 molecules                    */
#define  XC_GGA_XC_HCTH_147   163  /* HCTH functional fitted to 147 molecules                    */
#define  XC_GGA_XC_HCTH_407   164  /* HCTH functional fitted to 147 molecules                    */
#define  XC_GGA_XC_EDF1       165  /* Empirical functionals from Adamson, Gill, and Pople        */
#define  XC_GGA_XC_XLYP       166  /* XLYP functional                                            */
#define  XC_GGA_XC_B97        167  /* Becke 97                                                   */
#define  XC_GGA_XC_B97_1      168  /* Becke 97-1                                                 */
#define  XC_GGA_XC_B97_2      169  /* Becke 97-2                                                 */
#define  XC_GGA_XC_B97_D      170  /* Grimme functional to be used with C6 vdW term              */
#define  XC_GGA_XC_B97_K      171  /* Boese-Martin for Kinetics                                  */
#define  XC_GGA_XC_B97_3      172  /* Becke 97-3                                                 */
#define  XC_GGA_XC_PBE1W      173  /* Functionals fitted for water                               */
#define  XC_GGA_XC_MPWLYP1W   174  /* Functionals fitted for water                               */
#define  XC_GGA_XC_PBELYP1W   175  /* Functionals fitted for water                               */
#define  XC_GGA_XC_SB98_1a    176  /* Schmider-Becke 98 parameterization 1a                      */
#define  XC_GGA_XC_SB98_1b    177  /* Schmider-Becke 98 parameterization 1b                      */
#define  XC_GGA_XC_SB98_1c    178  /* Schmider-Becke 98 parameterization 1c                      */
#define  XC_GGA_XC_SB98_2a    179  /* Schmider-Becke 98 parameterization 2a                      */
#define  XC_GGA_XC_SB98_2b    180  /* Schmider-Becke 98 parameterization 2b                      */
#define  XC_GGA_XC_SB98_2c    181  /* Schmider-Becke 98 parameterization 2c                      */
#define  XC_HYB_GGA_XC_B3PW91 401  /* The original hybrid proposed by Becke                      */
#define  XC_HYB_GGA_XC_B3LYP  402  /* The (in)famous B3LYP                                       */
#define  XC_HYB_GGA_XC_B3P86  403  /* Perdew 86 hybrid similar to B3PW91                         */
#define  XC_HYB_GGA_XC_O3LYP  404  /* hybrid using the optx functional                           */
#define  XC_HYB_GGA_XC_mPW1K  405  /* mixture of mPW91 and PW91 optimized for kinetics           */
#define  XC_HYB_GGA_XC_PBEH   406  /* aka PBE0 or PBE1PBE                                        */
#define  XC_HYB_GGA_XC_B97    407  /* Becke 97                                                   */
#define  XC_HYB_GGA_XC_B97_1  408  /* Becke 97-1                                                 */
#define  XC_HYB_GGA_XC_B97_2  410  /* Becke 97-2                                                 */
#define  XC_HYB_GGA_XC_X3LYP  411  /* maybe the best hybrid                                      */
#define  XC_HYB_GGA_XC_B1WC   412  /* Becke 1-parameter mixture of WC and PBE                    */
#define  XC_HYB_GGA_XC_B97_K  413  /* Boese-Martin for Kinetics                                  */
#define  XC_HYB_GGA_XC_B97_3  414  /* Becke 97-3                                                 */
#define  XC_HYB_GGA_XC_mPW3PW 415  /* mixture with the mPW functional                            */
#define  XC_HYB_GGA_XC_B1LYP  416  /* Becke 1-parameter mixture of B88 and LYP                   */
#define  XC_HYB_GGA_XC_B1PW91 417  /* Becke 1-parameter mixture of B88 and PW91                  */
#define  XC_HYB_GGA_XC_mPW1PW 418  /* Becke 1-parameter mixture of mPW91 and PW91                */
#define  XC_HYB_GGA_XC_mPW3LYP 419  /* mixture of mPW and LYP                                     */
#define  XC_HYB_GGA_XC_SB98_1a 420  /* Schmider-Becke 98 parameterization 1a                      */
#define  XC_HYB_GGA_XC_SB98_1b 421  /* Schmider-Becke 98 parameterization 1b                      */
#define  XC_HYB_GGA_XC_SB98_1c 422  /* Schmider-Becke 98 parameterization 1c                      */
#define  XC_HYB_GGA_XC_SB98_2a 423  /* Schmider-Becke 98 parameterization 2a                      */
#define  XC_HYB_GGA_XC_SB98_2b 424  /* Schmider-Becke 98 parameterization 2b                      */
#define  XC_HYB_GGA_XC_SB98_2c 425  /* Schmider-Becke 98 parameterization 2c                      */
#define  XC_MGGA_X_LTA        201  /* Local tau approximation of Ernzerhof & Scuseria            */
#define  XC_MGGA_X_TPSS       202  /* Perdew, Tao, Staroverov & Scuseria exchange                */
#define  XC_MGGA_X_M06L       203  /* Zhao, Truhlar exchange                                     */
#define  XC_MGGA_X_GVT4       204  /* GVT4 from Van Voorhis and Scuseria (exchange part)         */
#define  XC_MGGA_X_TAU_HCTH   205  /* tau-HCTH from Boese and Handy                              */
#define  XC_MGGA_X_BR89       206  /* Becke-Roussel 89                                           */
#define  XC_MGGA_X_BJ06       207  /* Becke & Johnson correction to Becke-Roussel 89             */
#define  XC_MGGA_X_TB09       208  /* Tran & Blaha correction to Becke & Johnson                 */
#define  XC_MGGA_X_RPP09      209  /* Rasanen, Pittalis, and Proetto correction to Becke & Johnson  */
#define  XC_MGGA_C_TPSS       231  /* Perdew, Tao, Staroverov & Scuseria correlation             */
#define  XC_MGGA_C_VSXC       232  /* VSxc from Van Voorhis and Scuseria (correlation part)      */
#define  XC_LCA_OMC           301  /* Orestes, Marcasso & Capelle                                */
#define  XC_LCA_LCH           302  /* Lee, Colwell & Handy                                       */
