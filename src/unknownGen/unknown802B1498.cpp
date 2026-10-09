#include <unknownGen.h>
#include <meta/igMovieRenderer.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B1138(void *);
}
extern "C" {
void igMovieRenderer_virtual68(int p0){
 fn_802B1138(reinterpret_cast<Meta::igMovieRenderer *>((void *)p0)->_movieManager);
}
}
#pragma pop
