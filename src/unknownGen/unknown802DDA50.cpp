#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
void fn_802DDADC(void *,short);
extern char beDataBase_vtable[];
}
struct UnknownGenObject802DDA50 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 char unknown38[8];
};
extern "C" {
void *beDataBase_vtableRead(){
 UnknownGenObject802DDA50 object;
 igObject_construct(&object);
 object.unknown00=beDataBase_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_802DDADC(&object,-1);
 return result;
}
}
#pragma pop
