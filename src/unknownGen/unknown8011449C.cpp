#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_804968F8[];
}
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){fn_8006665C(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=lbl_804968F8;}
};
extern "C" {
void *fn_8011449C(){
 UnknownGenObject8011449C object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=lbl_804968F8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
