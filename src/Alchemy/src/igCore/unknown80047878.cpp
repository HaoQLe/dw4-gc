#include "unknown80047878.h"
#pragma push
#pragma auto_inline off
extern "C" int igEventTracker_virtual68(Unknown800496E8Owner *object,Unknown800496E8Record *record,int previous){
 if(!(object->unknown10&(1<<record->unknown00))) return -1;
 switch(record->unknown00){
  case 13:if(!(object->unknown18&(1<<record->unknown14))) return -1;break;
  case 14:if(!unknown80047878Mask(object->unknown1C,record->unknown20)) return -1;if(!(object->unknown1C&(1<<record->unknown24))) return -1;break;
  case 15:break;
  default:break;
 }
 int start;
 {
  Unknown800496E8Lock lock(object->unknown08);
  if((object->unknown0C>>1)&1) return -1;
  object->unknown0C|=2;
  char buffer[0x20];char *p=buffer;
  unsigned int flags=0;
  int a=-1,b=-1,c=-1,d=-1,e=-1,f=-1,h=-1,index=0;
  start=object->unknown50->unknown08;
  p=unknown80047878Unsigned(p,record->unknown00);
  if((object->unknown14&2) && record->unknown2C && *record->unknown2C) a=fn_800744AC(object->unknown34,record->unknown2C);
  if(object->unknown14&0x40){if(record->unknown30 && *record->unknown30) b=fn_800744AC(object->unknown38,record->unknown30);else b=object->unknown252C;}
  if((object->unknown14&0x80) && record->unknown34 && *record->unknown34) c=fn_800744AC(object->unknown3C,record->unknown34);
  if((object->unknown14&4) && record->unknown38 && *record->unknown38) d=fn_800744AC(object->unknown40,record->unknown38);
  if((object->unknown14&8) && record->unknown44 && *record->unknown44) e=fn_800744AC(object->unknown44,record->unknown44);
  if((object->unknown14&0x10) && record->unknown40 && *record->unknown40) f=fn_800744AC(object->unknown34,record->unknown40);
  if((object->unknown14&0x20) && previous!=-1){void *value=object->unknown5C->slot60(lbl_8055D820,previous+1);h=object->unknown48->slot6C(value);if(h!=-1) flags|=0x20;}
  if(a!=-1) flags|=2;
  if(b!=-1) flags|=0x40;
  if(c!=-1) flags|=0x80;
  if(d!=-1) flags|=4;
  if(((object->unknown14>>8)&1) && object->unknown2428!=-1) flags|=0x100;
  if(e!=-1 || record->unknown48) flags|=8;
  if(f!=-1) flags|=0x10;
  if(h!=-1) flags|=0x20;
  if((object->unknown14&0x8000) && record->unknown50) flags|=0x8000;
  switch(record->unknown00){
   case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:{
    flags|=1;
    if((object->unknown0C&8) && record->unknown00==3){
     int old=object->slot7C(record->unknown08);
     if(old!=-1){int kind;const Unknown80042DECResult &result=object->slot70(old,&kind);if(result.unknown00==kSuccess__3Gap && kind==3){d=fn_800744AC(object->unknown40,lbl_804692E4);flags|=4;}}
    }
    p=unknown80047878Unsigned(p+1,flags);
    p=unknown80047878Word(p,record->unknown08);
    int value=record->unknown0C;
    if(!value && (record->unknown00==3 || record->unknown00==8)){int old=object->slot7C(record->unknown08);if(old!=-1) object->slot78(old,&value);}
    p=unknown80047878Signed(value,p);
    p=unknown80047878Signed(record->unknown10,p);
    object->slotC4(record->unknown08,start);
    break;
   }
   case 13:{
    int value=-1;
    if(record->unknown14) flags|=0x200;
    if(record->unknown18) flags|=0x400;
    const char *text=reinterpret_cast<const char *>(record->unknown1C);
    if(text && *text){value=fn_800744AC(object->unknown40,text);if(value!=-1) flags|=0x800;}
    p=unknown80047878Unsigned(p+1,flags);
    if(record->unknown14) p=unknown80047878Unsigned(p,record->unknown14);
    if(record->unknown18) p=unknown80047878Signed(record->unknown18,p);
    if(value!=-1) p=unknown80047878Signed(value,p);
    break;
   }
   case 14:{
    int value=-1;
    if(record->unknown20) flags|=0x1000;
    if(record->unknown24) flags|=0x2000;
    const char *text=reinterpret_cast<const char *>(record->unknown28);
    if(text && *text){value=fn_800744AC(object->unknown40,text);if(value!=-1) flags|=0x4000;}
    p=unknown80047878Unsigned(p+1,flags);
    if(record->unknown20) p=unknown80047878Unsigned(p,record->unknown20);
    if(record->unknown24) p=unknown80047878Signed(record->unknown24,p);
    if(value!=-1) p=unknown80047878Signed(value,p);
    break;
   }
   case 15:p=unknown80047878Unsigned(p+1,flags);break;
   default:p=unknown80047878Unsigned(p+1,flags);break;
  }
  p=unknown80047878Signed(object->unknown28,p);
  if(a!=-1) p=unknown80047878Signed(a,p);
  if(b!=-1) p=unknown80047878Signed(b,p);
  if(c!=-1) p=unknown80047878Signed(c,p);
  if(d!=-1) p=unknown80047878Signed(d,p);
  if((object->unknown14&0x100) && object->unknown2428!=-1) p=unknown80047878Signed(object->unknown2428,p);
  if(e!=-1){p=unknown80047878Signed(e,p);p=unknown80047878Unsigned(p,record->unknown48);}
  if(f!=-1) p=unknown80047878Signed(f,p);
  if(h!=-1) p=unknown80047878Signed(h,p);
  if((object->unknown14&0x8000) && record->unknown50){
   p=unknown80047878Unsigned(p,record->unknown50);
   int kind;
   do {
    kind=fn_8004C11C(record,index);
    switch(kind){
     case 1:p=unknown80047878Signed(fn_8004C140(record,index),p);break;
     case 2:p=unknown80047878Unsigned(p,fn_8004C19C(record,index));break;
     case 3:{const char *text=fn_8004C1F8(record,index);if(text && *text){int value=fn_800744AC(object->unknown40,text);if(value!=-1) p=unknown80047878Signed(value,p);}break;}
     case 0:default:break;
    }
    ++index;
   }while(kind);
  }
  int length=p-buffer;buffer[1]=static_cast<char>(length)-2;
  Unknown80042DECStorage *storage=object->unknown50;
  if(length+storage->unknown08>storage->unknown0C){int capacity=storage->unknown0C*2;if(capacity>=reinterpret_cast<volatile Unknown80042DECStorage *>(storage)->unknown08) fn_8004155C(storage,capacity,1);}
  fn_80041790(object->unknown50,length,buffer,1);
  ++object->unknown28;object->unknown0C&=~2;
 }
 if(object->unknown2C && (record->unknown00==1 || record->unknown00==6)){
  Unknown800496E8Record copy(*record);copy.unknown00=record->unknown00==1 ? 2 : 7;
  object->slot68(&copy,previous+1);
 }
 return start;
}
#pragma pop
