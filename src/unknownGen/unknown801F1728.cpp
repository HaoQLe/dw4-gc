#include <unknownGen.h>
#include <meta/igIniShaderFactory.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006AF30(void *);
}
extern "C" {
void igIniShaderFactory_virtual68(int p0){
 fn_8006AF30(reinterpret_cast<Meta::igIniShaderFactory *>((void *)p0)->_fileCache);
}
}
#pragma pop
