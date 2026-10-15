#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075C84(void *);
void *fn_80075CC0(void *,void *);
void igUnsignedLongMetaField_register();
extern char lbl_80471914[];
extern char lbl_80476F60[];
extern void *igUnsignedLongMetaField_meta;
void igUnsignedLongMetaField_arkRegister();
}
struct UnknownGenRoot800225AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800225AC(){fn_80075C84(this);}
};
struct UnknownGenObject800225AC_0 : UnknownGenRoot800225AC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800225AC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800225AC : UnknownGenObject800225AC_0 {
 char unknown10[48];
 inline ~UnknownGenObject800225AC(){unknown00=lbl_80476F60;}
};
extern "C" {
void *igUnsignedLongArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igUnsignedLongMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075CC0(object,a);
 return object;
}
}
#pragma pop
