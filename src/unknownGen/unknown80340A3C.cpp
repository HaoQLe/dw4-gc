#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char beNDMWDegiData_vtable[];
}
struct UnknownGenRoot80340A3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80340A3C(){igObject_construct(this);}
};
struct UnknownGenObject80340A3C : UnknownGenRoot80340A3C {
 char unknown04[44];
 UnknownGenString unknown30;
 UnknownGenString unknown34;
 char unknown38[24];
 inline ~UnknownGenObject80340A3C(){unknown00=beNDMWDegiData_vtable;}
};
extern "C" {
void *beNDMWDegiData_vtableRead(){
 UnknownGenObject80340A3C object;
 object.unknown00=beNDMWDegiData_vtable;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
