#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igLuaState_vtable[];
extern char beLuaState_vtable[];
}
struct UnknownGenRoot802D168C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D168C(){igObject_construct(this);}
};
struct UnknownGenObject802D168C_0 : UnknownGenRoot802D168C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D168C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D168C_1 : UnknownGenObject802D168C_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802D168C_1(){unknown00=igLuaState_vtable;}
};
struct UnknownGenObject802D168C : UnknownGenObject802D168C_1 {
 char unknown14[12];
 inline ~UnknownGenObject802D168C(){unknown00=beLuaState_vtable;}
};
extern "C" {
void *beLuaState_vtableRead(){
 UnknownGenObject802D168C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igLuaState_vtable;
 object.unknown10.value=0;
 object.unknown00=beLuaState_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
