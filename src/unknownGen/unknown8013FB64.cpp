#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FD28();
void fn_80140664();
extern char lbl_8049DE54[];
extern char lbl_804A5904[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8D0[8];
extern void *lbl_80563FB4;
void *fn_8013FB64();
void *fn_8013FBA0();
void fn_8013FC6C();
void fn_8013FC94();
void *fn_8013FD08();
}
struct UnknownGenRoot8013FBA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013FBA0(){fn_8006665C(this);}
};
struct UnknownGenObject8013FBA0_0 : UnknownGenRoot8013FBA0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013FBA0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013FBA0_1 : UnknownGenObject8013FBA0_0 {
 inline ~UnknownGenObject8013FBA0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013FBA0 : UnknownGenObject8013FBA0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013FBA0(){unknown00=lbl_804A5904;}
};
extern "C" {
void *fn_8013FB64(){
 if(!lbl_80563FB4 || !(reinterpret_cast<unsigned int *>(lbl_80563FB4)[0x24/4]&4)) fn_8013FC6C();
 return lbl_80563FB4;
}
void *fn_8013FBA0(){
 UnknownGenObject8013FBA0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5904;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013FC6C(){
 fn_80066188((int)fn_8013FC94);
}
void fn_8013FC94(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FB4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013FD08,(int)lbl_8049DE54,44,(int)fn_8013FBA0,(int)fn_8013FD28,0,(int)lbl_8055F8D0);
}
void *fn_8013FD08(){return fn_8013FB64();}
}
#pragma pop
