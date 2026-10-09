#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoManagerList_getMeta();
void beBaseInfoManagerList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void *fn_802B740C();
void *fn_802CDF04();
void fn_802E3B9C();
void igInfoManager_register();
void igObjectList_register();
extern char lbl_80420D7C[];
extern char lbl_80420D94[];
extern char lbl_804D2DC0[];
extern char lbl_804D2DC8[];
extern char lbl_804D2DD8[];
extern char lbl_804D2DE8[];
extern char lbl_804D2DF8[];
extern char lbl_804D2E08[];
extern char lbl_805356F0[];
extern void *lbl_805356F4;
extern void *lbl_80535708;
extern void *lbl_805621F4;
void beBaseInfoManagerList_register();
void *beBaseInfoManagerList_getMetaCall();
void *beBaseInfoManager_getMeta();
void fn_802E38E0();
void beBaseInfoManager_register();
void *beBaseInfoManager_getMetaCall();
void beBaseInfoManager_fieldInit();
void *fn_802E3A88();
}
extern "C" {
void fn_802E3784(){
 fn_80066188((int)beBaseInfoManagerList_register);
}
void beBaseInfoManagerList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356F0,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoManagerList_getMetaCall,(int)lbl_80420D7C,20,(int)beBaseInfoManagerList_vtableRead,0,0,(int)lbl_804D2DC0);
}
void *beBaseInfoManagerList_getMetaCall(){return beBaseInfoManagerList_getMeta();}
void *fn_802E3840(){
 if(!lbl_805356F4) lbl_805356F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356F4;
}
void *beBaseInfoManager_getMeta(){
 if(!lbl_805356F4 || !(reinterpret_cast<unsigned int *>(lbl_805356F4)[0x24/4]&4)) fn_802E38E0();
 return lbl_805356F4;
}
void fn_802E38E0(){
 fn_80066188((int)beBaseInfoManager_register);
}
void beBaseInfoManager_register(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_805356F4,(int)igInfoManager_register,(int)fn_80284550,(int)beBaseInfoManager_getMetaCall,(int)lbl_80420D94,32,0,(int)beBaseInfoManager_fieldInit,0,(int)lbl_804D2DC8);
}
void *beBaseInfoManager_getMetaCall(){return beBaseInfoManager_getMeta();}
void beBaseInfoManager_fieldInit(){
 void *value0=lbl_805356F4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2DD8,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802E3A88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804D2DE8,lbl_804D2DF8,lbl_804D2E08,value1);
}
void *fn_802E3A88(){
 if(!lbl_80535708) lbl_80535708=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535708;
}
void *beBaseInfoList_getMeta(){
 if(!lbl_80535708 || !(reinterpret_cast<unsigned int *>(lbl_80535708)[0x24/4]&4)) fn_802E3B9C();
 return lbl_80535708;
}
}
#pragma pop
