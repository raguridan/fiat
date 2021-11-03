/*
 * (C) Copyright 2005- ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation
 * nor does it submit to any jurisdiction.
 */

INTERFACE
SUBROUTINE GSTATS_SETUP( KPROC,KMYPROC,KPRCIDS,&
 & LDSTATS,LDSTATSCPU,LDSYNCSTATS,LDDETAILED_STATS,LDBARRIER_STATS,LDBARRIER_STATS2,&
 & LDSTATS_OMP,LDSTATS_COMMS,LDSTATS_MEM,KSTATS_MEM,LDSTATS_ALLOC,&
 & LDTRACE_STATS,KTRACE_STATS,KPRNT_STATS,LDXML_STATS)
USE EC_PARKIND, ONLY : JPIM
LOGICAL :: LDSTATS
LOGICAL :: LDSTATSCPU
LOGICAL :: LDSYNCSTATS
LOGICAL :: LDDETAILED_STATS
LOGICAL :: LDBARRIER_STATS
LOGICAL :: LDBARRIER_STATS2
LOGICAL :: LDSTATS_OMP
LOGICAL :: LDSTATS_COMMS
LOGICAL :: LDTRACE_STATS
INTEGER(KIND=JPIM) :: KTRACE_STATS
INTEGER(KIND=JPIM) :: KPROC,KMYPROC
INTEGER(KIND=JPIM) :: KPRCIDS(KPROC)
INTEGER(KIND=JPIM) :: KSTATS_MEM
INTEGER(KIND=JPIM) :: KPRNT_STATS
LOGICAL :: LDSTATS_MEM
LOGICAL :: LDSTATS_ALLOC
LOGICAL :: LDXML_STATS
END SUBROUTINE
END INTERFACE
