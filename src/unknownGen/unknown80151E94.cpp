#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013496C();
void *fn_80135250();
void fn_801AB9F0();
void igChangeInterpolationMethod_fieldInit();
void igItemBase_register();
void igOptVisitObject_register();
extern char lbl_804A0104[];
extern char lbl_804A0110[];
extern char lbl_804A0124[];
extern char lbl_804A0144[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A83F4[];
extern char lbl_804A848C[];
extern char lbl_804AAF48[];
extern char lbl_8055FD0C[8];
extern char lbl_8055FD14[8];
extern char lbl_8055FD1C[8];
extern char lbl_8055FD24[8];
extern char lbl_8055FD2C[8];
extern char lbl_8055FD34[4];
extern char lbl_8055FD38[4];
extern char lbl_8055FD3C[4];
extern char lbl_8055FD40[4];
extern char lbl_8055FD44[4];
extern void *lbl_805622A4;
extern void *lbl_80564530;
extern void *lbl_8056453C;
extern void *lbl_80564540;
extern void *lbl_80564548;
void *igChildEdit_getMeta();
void fn_80151ED0();
void igChildEdit_register();
void *igChildEdit_getMetaCall();
void igChildEdit_fieldInit();
void *igChildContainer_getMeta();
void fn_80152054();
void igChildContainer_register();
void *igChildContainer_getMetaCall();
void *igChangePlayMode_getMeta();
void *igChangePlayMode_vtableRead();
void fn_8015227C();
void igChangePlayMode_register();
void *igChangePlayMode_getMetaCall();
void igChangePlayMode_fieldInit();
void *igChangeInterpolationMethod_getMeta();
void *igChangeInterpolationMethod_vtableRead();
void fn_8015253C();
void igChangeInterpolationMethod_register();
void *igChangeInterpolationMethod_getMetaCall();
}
struct UnknownGenRoot8015213C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015213C(){fn_8006665C(this);}
};
struct UnknownGenObject8015213C_0 : UnknownGenRoot8015213C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015213C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015213C_1 : UnknownGenObject8015213C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015213C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015213C : UnknownGenObject8015213C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8015213C(){unknown00=lbl_804A83F4;}
};
struct UnknownGenRoot801523FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801523FC(){fn_8006665C(this);}
};
struct UnknownGenObject801523FC_0 : UnknownGenRoot801523FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801523FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801523FC_1 : UnknownGenObject801523FC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801523FC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801523FC : UnknownGenObject801523FC_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801523FC(){unknown00=lbl_804A848C;}
};
extern "C" {
void *igChildEdit_getMeta(){
 if(!lbl_80564530 || !(reinterpret_cast<unsigned int *>(lbl_80564530)[0x24/4]&4)) fn_80151ED0();
 return lbl_80564530;
}
void fn_80151ED0(){
 fn_80066188((int)igChildEdit_register);
}
void igChildEdit_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564530,(int)igChildContainer_register,(int)fn_80135250,(int)igChildEdit_getMetaCall,(int)lbl_804A0104,40,0,(int)igChildEdit_fieldInit,0,(int)lbl_8055FD0C);
}
void *igChildEdit_getMetaCall(){return igChildEdit_getMeta();}
void igChildEdit_fieldInit(){
 void *value0=lbl_80564530;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD14,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055FD1C,lbl_8055FD24,lbl_8055FD2C,value1);
}
void *igChildContainer_getMeta(){
 if(!lbl_8056453C || !(reinterpret_cast<unsigned int *>(lbl_8056453C)[0x24/4]&4)) fn_80152054();
 return lbl_8056453C;
}
void fn_80152054(){
 fn_80066188((int)igChildContainer_register);
}
void igChildContainer_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056453C,(int)igItemBase_register,(int)fn_8013496C,(int)igChildContainer_getMetaCall,(int)lbl_804A0110,32,0,0,0,0);
}
void *igChildContainer_getMetaCall(){return igChildContainer_getMeta();}
void *igChangePlayMode_getMeta(){
 if(!lbl_80564540 || !(reinterpret_cast<unsigned int *>(lbl_80564540)[0x24/4]&4)) fn_8015227C();
 return lbl_80564540;
}
void *igChangePlayMode_vtableRead(){
 UnknownGenObject8015213C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A83F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8015227C(){
 fn_80066188((int)igChangePlayMode_register);
}
void igChangePlayMode_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564540,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igChangePlayMode_getMetaCall,(int)lbl_804A0124,48,(int)igChangePlayMode_vtableRead,(int)igChangePlayMode_fieldInit,0,0);
}
void *igChangePlayMode_getMetaCall(){return igChangePlayMode_getMeta();}
void igChangePlayMode_fieldInit(){
 void *value0=lbl_80564540;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD34,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055FD44);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_801AB9F0;
 fn_800659C0(value0,lbl_8055FD38,lbl_8055FD3C,lbl_8055FD40,value1);
}
void *igChangeInterpolationMethod_getMeta(){
 if(!lbl_80564548 || !(reinterpret_cast<unsigned int *>(lbl_80564548)[0x24/4]&4)) fn_8015253C();
 return lbl_80564548;
}
void *igChangeInterpolationMethod_vtableRead(){
 UnknownGenObject801523FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A848C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8015253C(){
 fn_80066188((int)igChangeInterpolationMethod_register);
}
void igChangeInterpolationMethod_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564548,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igChangeInterpolationMethod_getMetaCall,(int)lbl_804A0144,56,(int)igChangeInterpolationMethod_vtableRead,(int)igChangeInterpolationMethod_fieldInit,0,0);
}
void *igChangeInterpolationMethod_getMetaCall(){return igChangeInterpolationMethod_getMeta();}
}
#pragma pop
