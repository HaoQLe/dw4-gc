#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013496C();
void igFieldSource_fieldInit();
void igItemBase_register();
extern char lbl_8049F1F0[];
extern char lbl_8049F1FC[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A6D58[];
extern char lbl_804AAF48[];
extern void *lbl_80564318;
void *igFieldSource_getMeta();
void *igFieldSource_vtableRead();
void fn_8014B64C();
void igFieldSource_register();
void *igFieldSource_getMetaCall();
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
void *igFieldSource_getMeta(){
 if(!lbl_80564318 || !(reinterpret_cast<unsigned int *>(lbl_80564318)[0x24/4]&4)) fn_8014B64C();
 return lbl_80564318;
}
void *igFieldSource_vtableRead(){
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
 fn_80066188((int)igFieldSource_register);
}
void igFieldSource_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564318,(int)igItemBase_register,(int)fn_8013496C,(int)igFieldSource_getMetaCall,(int)lbl_8049F1FC,48,(int)igFieldSource_vtableRead,(int)igFieldSource_fieldInit,0,(int)lbl_8049F1F0);
}
void *igFieldSource_getMetaCall(){return igFieldSource_getMeta();}
}
#pragma pop
