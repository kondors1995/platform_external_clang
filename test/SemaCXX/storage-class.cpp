// RUN: %clang_cc1 -fsyntax-only -verify %s
extern const int PR6495a = 42;
extern int PR6495b = 42; // expected-warning{{'extern' variable has an initializer}}
