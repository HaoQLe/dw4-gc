#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igMoviePlugin_registerNow();
extern void *igMoviePlugin_meta;
}
extern "C" {
void *igMoviePlugin_getMeta(){
 if(!igMoviePlugin_meta || !(reinterpret_cast<unsigned int *>(igMoviePlugin_meta)[0x24/4]&4)) igMoviePlugin_registerNow();
 return igMoviePlugin_meta;
}
}
#pragma pop
