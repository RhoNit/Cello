#include "Cello.h"

const char* Clear_Name(void) {
  return "Clear";
}

const char* Clear_Brief(void) {
  return "Object can be Emptied";
}

const char* Clear_Description(void) {
  return
    "The `Clear` class can be implemented when it makes sense to _clear_ an "
    "object, such as to remove all of the items from an `Array` or `Table`.";
}

const char* Clear_Definition(void) {
  return
    "struct Clear {\n"
    "  void (*clear)(var);\n"  
    "};\n";
}

static struct Example* Clear_Examples(void) {
  
  static struct Example examples[] = {
    {
      "Usage",
      "var x = new(Array, Int, $I(10), $I(20));\n"
      "show($I(len(x))); /* 2 */\n"
      "clear(x);\n"
      "show($I(len(x))); /* 0 */\n"
    }, {NULL, NULL}
  };
  
  return examples;
}

static struct Method* Clear_Methods(void) {
  
  static struct Method methods[] = {
    {
      "clear", 
      "void clear(var self);",
      "Clear the object `self`."
    }, {NULL, NULL, NULL}
  };
  
  return methods;
}

var Clear = Cello(Clear, 
  Instance(Doc,
    Clear_Name,       Clear_Brief,    Clear_Description, 
    Clear_Definition, Clear_Examples, Clear_Methods));
  
void clear(var self) {
  method(self, Clear, clear);
}

