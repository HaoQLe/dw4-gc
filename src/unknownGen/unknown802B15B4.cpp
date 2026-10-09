#include <unknownGen.h>
#include <meta/igMoviePlugin.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A2D0(void *,void *);
}
extern "C" {
void igMoviePlugin_virtual60(int p0,int p1){
 fn_8028A2D0((void *)p1,reinterpret_cast<Meta::igMoviePlugin *>((void *)p0)->_movieManager);
}
}
#pragma pop
