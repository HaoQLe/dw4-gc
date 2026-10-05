#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB4B8[];
extern char lbl_804CBB90[];
}
struct UnknownGenObject8028686C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8028686C(){
 UnknownGenObject8028686C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804CB4B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
