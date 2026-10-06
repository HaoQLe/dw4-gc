#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013496C();
void fn_8013BCD0();
void fn_80145C0C();
extern char lbl_8049C7D4[];
extern char lbl_8049DAA8[];
extern char lbl_804A4A8C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563EDC;
void *fn_8013BAB0();
void *fn_8013BAEC();
void fn_8013BC10();
void fn_8013BC38();
void *fn_8013BCB0();
}
struct UnknownGenRoot8013BAEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BAEC(){fn_8006665C(this);}
};
struct UnknownGenObject8013BAEC : UnknownGenRoot8013BAEC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8013BAEC(){unknown00=lbl_804A4A8C;}
};
extern "C" {
void *fn_8013BAB0(){
 if(!lbl_80563EDC || !(reinterpret_cast<unsigned int *>(lbl_80563EDC)[0x24/4]&4)) fn_8013BC10();
 return lbl_80563EDC;
}
void *fn_8013BAEC(){
 UnknownGenObject8013BAEC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A4A8C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013BC10(){
 fn_80066188((int)fn_8013BC38);
}
void fn_8013BC38(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EDC,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013BCB0,(int)lbl_8049C7D4,44,(int)fn_8013BAEC,(int)fn_8013BCD0,0,(int)lbl_8049DAA8);
}
void *fn_8013BCB0(){return fn_8013BAB0();}
}
#pragma pop
