#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMovieInfo_arkRegister();
void *fn_803115F8();
extern void *beMovieInfo_meta;
}
extern "C" {
void *fn_802C48A4(){return fn_803115F8();}
void *beMovieInfo_getMeta(){
 if(!beMovieInfo_meta || !(reinterpret_cast<unsigned int *>(beMovieInfo_meta)[0x24/4]&4)) beMovieInfo_arkRegister();
 return beMovieInfo_meta;
}
}
#pragma pop
