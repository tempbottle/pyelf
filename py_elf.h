/*
 * This file is part of pyelf
 * Copyright (c) 2010 Gianni Tedesco <gianni@scaramanga.co.uk>
 * Released under the terms of the GNU GPL version 3
*/

#ifndef _PY_ELF_H
#define _PY_ELF_H

#include <Python.h>
#include <elf.h>
#include <gelf.h>
#include <libelf.h>

#define PACKAGE "elf"

/* Synthetic members of IDL-wrapped structs */
struct pyelf_shdr;
PyObject *pyelf_shdr_type_get(struct pyelf_shdr *self);

#endif /* _PY_ELF_H */
