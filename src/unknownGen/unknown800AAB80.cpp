#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char gDBCommTable[];
}
extern "C" {
void fn_800AAB80(){
 reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>((gDBCommTable+12)))(gDBCommTable);
}
}
#pragma pop
