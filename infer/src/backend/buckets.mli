(*
 * Copyright (c) 2009 - 2013 Monoidics ltd.
 * Copyright (c) 2013 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *)

(** Classify bugs into buckets *)

open Utils

(** Classify the bucket of an error desc using Location.access and nullable information *)
val classify_access :
  Localise.error_desc -> Localise.access option -> Sil.dexp option -> bool -> Localise.error_desc
