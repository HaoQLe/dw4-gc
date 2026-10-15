#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075A2C(void *);
void *fn_80075A68(void *,void *);
void igUnsignedIntMetaField_register();
extern char lbl_80471914[];
extern char lbl_80476E6C[];
extern void *igUnsignedIntMetaField_meta;
extern void *lbl_805621F4;
void igUnsignedIntMetaField_arkRegister();
}
struct UnknownGenRoot80022C28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022C28(){fn_80075A2C(this);}
};
struct UnknownGenObject80022C28_0 : UnknownGenRoot80022C28 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022C28_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022C28 : UnknownGenObject80022C28_0 {
 char unknown10[48];
 inline ~UnknownGenObject80022C28(){unknown00=lbl_80476E6C;}
};
extern "C" {
void *igUnsignedIntArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igUnsignedIntMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075A68(object,a);
 return object;
}
void *fn_80022BB0(){
 if(!igUnsignedIntMetaField_meta) igUnsignedIntMetaField_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igUnsignedIntMetaField_meta;
}
void *igUnsignedIntMetaField_getMeta(){
 if(!igUnsignedIntMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedIntMetaField_meta)[0x24/4]&4)) igUnsignedIntMetaField_arkRegister();
 return igUnsignedIntMetaField_meta;
}
void *fn_80022C28(){
 UnknownGenObject80022C28 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedIntMetaField_arkRegister(){
 meta_registerNow((int)igUnsignedIntMetaField_register);
}
}
#pragma pop
