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
void igHierarchyChangedEvent_register();
void igItemBase_register();
void igReplaceObject_fieldInit();
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
void *igReplacedObjectEvent_getMeta();
void *igReplacedObjectEvent_vtableRead();
void fn_801345C0();
void igReplacedObjectEvent_register();
void *igReplacedObjectEvent_getMetaCall();
void *fn_8013467C();
void igReplacedObjectEvent_fieldInit();
void *igReplaceObject_getMeta();
void *igReplaceObject_vtableRead();
void fn_801348AC();
void igReplaceObject_register();
void *igReplaceObject_getMetaCall();
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
void *igReplacedObjectEvent_getMeta(){
 if(!lbl_80563C34 || !(reinterpret_cast<unsigned int *>(lbl_80563C34)[0x24/4]&4)) fn_801345C0();
 return lbl_80563C34;
}
void *igReplacedObjectEvent_vtableRead(){
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
 fn_80066188((int)igReplacedObjectEvent_register);
}
void igReplacedObjectEvent_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C34,(int)igHierarchyChangedEvent_register,(int)fn_8013467C,(int)igReplacedObjectEvent_getMetaCall,(int)lbl_8049C73C,40,(int)igReplacedObjectEvent_vtableRead,(int)igReplacedObjectEvent_fieldInit,0,(int)lbl_8055F5CC);
}
void *igReplacedObjectEvent_getMetaCall(){return igReplacedObjectEvent_getMeta();}
void *fn_8013467C(){return lbl_805641F0;}
void igReplacedObjectEvent_fieldInit(){
 void *value0=lbl_80563C34;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F5D4,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055F5DC,lbl_8055F5E4,lbl_8055F5EC,value1);
}
void *igReplaceObject_getMeta(){
 if(!lbl_80563C40 || !(reinterpret_cast<unsigned int *>(lbl_80563C40)[0x24/4]&4)) fn_801348AC();
 return lbl_80563C40;
}
void *igReplaceObject_vtableRead(){
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
 fn_80066188((int)igReplaceObject_register);
}
void igReplaceObject_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C40,(int)igItemBase_register,(int)fn_8013496C,(int)igReplaceObject_getMetaCall,(int)lbl_8049C778,48,(int)igReplaceObject_vtableRead,(int)igReplaceObject_fieldInit,0,(int)lbl_8049C76C);
}
void *igReplaceObject_getMetaCall(){return igReplaceObject_getMeta();}
void *fn_8013496C(){return lbl_80564164;}
}
#pragma pop
