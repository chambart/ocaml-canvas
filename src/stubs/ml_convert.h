/**************************************************************************/
/*                                                                        */
/*    Copyright 2022 OCamlPro                                             */
/*                                                                        */
/*  All rights reserved. This file is distributed under the terms of the  */
/*  GNU Lesser General Public License version 2.1, with the special       */
/*  exception on linking described in the file LICENSE.                   */
/*                                                                        */
/**************************************************************************/

#ifndef __ML_CONVERT_H
#define __ML_CONVERT_H

#include <stdint.h>

#define CAML_NAME_SPACE
#include "caml/mlvalues.h"

#include "../implem/canvas.h"
#include "../implem/event.h"
#include "../implem/image_data.h"
#include "../implem/font_desc.h"

#if OCAML_VERSION < 41200

#define Val_none Val_int(0)

CAMLextern value caml_alloc_some(value v);

#endif

value
Val_int32_clip(
  int32_t i);

int32_t
Int32_val_clip(
  value mlValue);

font_slant_t
Slant_val(
  value mlSlant);

value
Val_focus_in_out(
  focus_in_out_t s);

value
Val_key_code(
  key_code_t key_code);

key_code_t
Key_code_val(
  value mlKeyCode);

value
Val_key_state(
  key_state_t s);

value
Val_key_flags(
  key_modifier_t m,
  bool dead);

value
Val_button(
  button_t b);

value
Val_button_state(
  button_state_t s);

value
Val_event(
  event_t *event);

value
Val_canvas(
  canvas_t *canvas);

canvas_t *
Canvas_val(
  value mlCanvas);

void
Nullify_val(
  value mlValue);

value
Val_image_data(
  image_data_t *image_data);

image_data_t
Image_data_val(
  value mlImageData);

#endif /* __ML_CONVERT_H */