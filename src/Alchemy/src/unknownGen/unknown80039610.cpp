#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80039720();
void fn_80066188(int);
void fn_800847CC(void *);
extern char lbl_80473928[];
extern void *lbl_80561ED8;
void fn_800396F8();
}
struct UnknownGenRoot8003964C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003964C(){fn_800847CC(this);}
};
struct UnknownGenObject8003964C : UnknownGenRoot8003964C {
 char unknown04[116];
 UnknownGenRefMember unknown78;
 char unknown7C[52];
 UnknownGenRefMember unknownB0;
 char unknownB4[28];
 inline ~UnknownGenObject8003964C(){unknown00=lbl_80473928;}
};
extern "C" {
void *fn_80039610(){
 if(!lbl_80561ED8 || !(reinterpret_cast<unsigned int *>(lbl_80561ED8)[0x24/4]&4)) fn_800396F8();
 return lbl_80561ED8;
}
void *fn_8003964C(){
 UnknownGenObject8003964C object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800396F8(){
 fn_80066188((int)fn_80039720);
}
}
#pragma pop
