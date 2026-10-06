#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void fn_8014B70C();
extern char lbl_8049F1F0[];
extern char lbl_8049F1FC[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6D58[];
extern char lbl_804AAF48[];
extern void *lbl_80564318;
void *fn_8014B4B4();
void *fn_8014B4F0();
void fn_8014B64C();
void fn_8014B674();
void *fn_8014B6EC();
}
struct UnknownGenRoot8014B4F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014B4F0(){fn_8006665C(this);}
};
struct UnknownGenObject8014B4F0 : UnknownGenRoot8014B4F0 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014B4F0(){unknown00=lbl_804A6D58;}
};
extern "C" {
void *fn_8014B4B4(){
 if(!lbl_80564318 || !(reinterpret_cast<unsigned int *>(lbl_80564318)[0x24/4]&4)) fn_8014B64C();
 return lbl_80564318;
}
void *fn_8014B4F0(){
 UnknownGenObject8014B4F0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A6D58;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014B64C(){
 fn_80066188((int)fn_8014B674);
}
void fn_8014B674(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564318,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014B6EC,(int)lbl_8049F1FC,48,(int)fn_8014B4F0,(int)fn_8014B70C,0,(int)lbl_8049F1F0);
}
void *fn_8014B6EC(){return fn_8014B4B4();}
}
#pragma pop
