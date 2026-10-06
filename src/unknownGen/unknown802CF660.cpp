#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_802CF6E0(void *,short);
extern char lbl_804D8058[];
}
struct UnknownGenObject802CF660 {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
};
extern "C" {
void *fn_802CF660(){
 UnknownGenObject802CF660 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D8058;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_802CF6E0(&object,-1);
 return result;
}
}
#pragma pop
