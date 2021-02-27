#include "bianyi.h"
void program() {
    // get next token
    next();
    while (token > 0) {
        global_declaration();
    }
}
