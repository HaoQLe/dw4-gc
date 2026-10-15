#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void fn_801C0640(void *,short);
void fn_801C0C50(void *);
void igFrustCullTraversal_registerNow();
void *fn_801E9C84();
extern void *igFrustCullTraversal_meta;
}
struct UnknownGenObject801C05F8 {
 void *unknown00;
 char unknown04[556];
};
extern "C" {
void *fn_801C0564(){return fn_801E9C84();}
void *igFrustCullTraversal_create(void *object){
 igFrustCullTraversal_registerNow();
 return meta_createInstance(igFrustCullTraversal_meta,object);
}
void *igFrustCullTraversal_getMeta(){
 if(!igFrustCullTraversal_meta || !(reinterpret_cast<unsigned int *>(igFrustCullTraversal_meta)[0x24/4]&4)) igFrustCullTraversal_registerNow();
 return igFrustCullTraversal_meta;
}
void *fn_801C05F8(){
 UnknownGenObject801C05F8 object;
 fn_801C0C50(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C0640(&object,-1);
 return result;
}
}
#pragma pop
