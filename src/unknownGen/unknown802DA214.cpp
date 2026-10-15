#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beFontGeomAttrPair_vtable[];
}
struct UnknownGenRoot802DA214 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DA214(){igObject_construct(this);}
};
struct UnknownGenObject802DA214 : UnknownGenRoot802DA214 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenString unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject802DA214(){unknown00=beFontGeomAttrPair_vtable;}
};
extern "C" {
void *beFontGeomAttrPair_vtableRead(){
 UnknownGenObject802DA214 object;
 object.unknown00=beFontGeomAttrPair_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
