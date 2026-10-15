#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075F0C(void *);
void *fn_80075F48(void *,void *);
void igUnsignedShortMetaField_register();
extern char lbl_80471914[];
extern char lbl_80477054[];
extern void *igUnsignedShortMetaField_meta;
void igUnsignedShortMetaField_arkRegister();
}
struct UnknownGenRoot80021F6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80021F6C(){fn_80075F0C(this);}
};
struct UnknownGenObject80021F6C_0 : UnknownGenRoot80021F6C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80021F6C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80021F6C : UnknownGenObject80021F6C_0 {
 char unknown10[48];
 inline ~UnknownGenObject80021F6C(){unknown00=lbl_80477054;}
};
extern "C" {
void *igUnsignedShortArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igUnsignedShortMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075F48(object,a);
 return object;
}
void *igUnsignedShortMetaField_getMeta(){
 if(!igUnsignedShortMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedShortMetaField_meta)[0x24/4]&4)) igUnsignedShortMetaField_arkRegister();
 return igUnsignedShortMetaField_meta;
}
void *fn_80021F6C(){
 UnknownGenObject80021F6C object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedShortMetaField_arkRegister(){
 meta_registerNow((int)igUnsignedShortMetaField_register);
}
}
#pragma pop
