#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80134974();
void fn_80145C0C();
void fn_80147188();
extern char lbl_8049C73C[];
extern char lbl_8049C76C[];
extern char lbl_8049C778[];
extern char lbl_804A361C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA7A0[];
extern char lbl_804AA80C[];
extern char lbl_804AA878[];
extern char lbl_804AAF48[];
extern char lbl_8055F5CC[8];
extern char lbl_8055F5D4[8];
extern char lbl_8055F5DC[8];
extern char lbl_8055F5E4[8];
extern char lbl_8055F5EC[8];
extern void *lbl_805622A4;
extern void *lbl_80563C34;
extern void *lbl_80563C40;
extern void *lbl_80564164;
extern void *lbl_805641F0;
void *fn_8013448C();
void *fn_801344C8();
void fn_801345C0();
void fn_801345E8();
void *fn_8013465C();
void *fn_8013467C();
void fn_80134684();
void *fn_80134714();
void *fn_80134750();
void fn_801348AC();
void fn_801348D4();
void *fn_8013494C();
void *fn_8013496C();
}
struct UnknownGenRoot801344C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801344C8(){fn_8006665C(this);}
};
struct UnknownGenObject801344C8 : UnknownGenRoot801344C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801344C8(){unknown00=lbl_804AA7A0;}
};
struct UnknownGenRoot80134750 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134750(){fn_8006665C(this);}
};
struct UnknownGenObject80134750 : UnknownGenRoot80134750 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80134750(){unknown00=lbl_804A361C;}
};
extern "C" {
void *fn_80134454(void *object){
 fn_801345C0();
 return fn_8006546C(lbl_80563C34,object);
}
void *fn_8013448C(){
 if(!lbl_80563C34 || !(reinterpret_cast<unsigned int *>(lbl_80563C34)[0x24/4]&4)) fn_801345C0();
 return lbl_80563C34;
}
void *fn_801344C8(){
 UnknownGenObject801344C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804AA878;
 object.unknown00=lbl_804AA80C;
 object.unknown00=lbl_804AA7A0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801345C0(){
 fn_80066188((int)fn_801345E8);
}
void fn_801345E8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C34,(int)fn_80147188,(int)fn_8013467C,(int)fn_8013465C,(int)lbl_8049C73C,40,(int)fn_801344C8,(int)fn_80134684,0,(int)lbl_8055F5CC);
}
void *fn_8013465C(){return fn_8013448C();}
void *fn_8013467C(){return lbl_805641F0;}
void fn_80134684(){
 void *value0=lbl_80563C34;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F5D4,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055F5DC,lbl_8055F5E4,lbl_8055F5EC,value1);
}
void *fn_80134714(){
 if(!lbl_80563C40 || !(reinterpret_cast<unsigned int *>(lbl_80563C40)[0x24/4]&4)) fn_801348AC();
 return lbl_80563C40;
}
void *fn_80134750(){
 UnknownGenObject80134750 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A361C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801348AC(){
 fn_80066188((int)fn_801348D4);
}
void fn_801348D4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C40,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013494C,(int)lbl_8049C778,48,(int)fn_80134750,(int)fn_80134974,0,(int)lbl_8049C76C);
}
void *fn_8013494C(){return fn_80134714();}
void *fn_8013496C(){return lbl_80564164;}
}
#pragma pop
