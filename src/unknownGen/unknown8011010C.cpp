#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496218[];
extern char lbl_80497C9C[];
}
struct UnknownGenRoot8011010C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011010C(){fn_8006665C(this);}
};
struct UnknownGenObject8011010C_0 : UnknownGenRoot8011010C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011010C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8011010C : UnknownGenObject8011010C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8011010C(){unknown00=lbl_80496218;}
};
extern "C" {
void *fn_8011010C(){
 UnknownGenObject8011010C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_80496218;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
