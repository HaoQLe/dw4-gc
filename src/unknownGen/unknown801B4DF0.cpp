#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_801B4EB0(void *,short);
void fn_801B5514(void *);
void igProjectiveShadowShader_arkRegister();
extern void *lbl_805621F4;
extern void *igProjectiveShadowShader_meta;
}
struct UnknownGenObject801B4E68 {
 void *unknown00;
 char unknown04[236];
};
extern "C" {
void *fn_801B4DF0(){
 if(!igProjectiveShadowShader_meta) igProjectiveShadowShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igProjectiveShadowShader_meta;
}
void *igProjectiveShadowShader_getMeta(){
 if(!igProjectiveShadowShader_meta || !(reinterpret_cast<unsigned int *>(igProjectiveShadowShader_meta)[0x24/4]&4)) igProjectiveShadowShader_arkRegister();
 return igProjectiveShadowShader_meta;
}
void *fn_801B4E68(){
 UnknownGenObject801B4E68 object;
 fn_801B5514(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801B4EB0(&object,-1);
 return result;
}
}
#pragma pop
