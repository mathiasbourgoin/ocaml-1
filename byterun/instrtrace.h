/***********************************************************************/
/*                                                                     */
/*                                OCaml                                */
/*                                                                     */
/*            Xavier Leroy, projet Cristal, INRIA Rocquencourt         */
/*                                                                     */
/*  Copyright 1996 Institut National de Recherche en Informatique et   */
/*  en Automatique.  All rights reserved.  This file is distributed    */
/*  under the terms of the GNU Library General Public License, with    */
/*  the special exception on linking described in file ../LICENSE.     */
/*                                                                     */
/***********************************************************************/

/* $Id$ */

/* Trace the instructions executed */

#ifndef _instrtrace_
#define _instrtrace_


#include "mlvalues.h"
#include "misc.h"

extern int caml_trace_flag;
extern intnat caml_icount;
void caml_stop_here (void);
void caml_disasm_instr_r (CAML_R, code_t pc);
void caml_trace_value_file_r (CAML_R, value v, code_t prog, int proglen, FILE * f);
void caml_trace_accu_sp_file_r (CAML_R, value accu, value * sp, code_t prog, int proglen, FILE * f);
#endif
