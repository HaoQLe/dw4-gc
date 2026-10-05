#include "unknown800489E4.h"
#pragma push
#pragma auto_inline off
extern "C" Unknown8004944CResult fn_800489E4(Unknown800496E8Owner *object,int offset,Unknown800496E8Record *record){
 Unknown800496E8Lock lock(object->unknown08);
 if(offset<0 || offset>=object->unknown50->unknown08) return kFailure__3Gap;
 const char *p=reinterpret_cast<const char *>(object->unknown50->unknown10)+offset;
 int index=0;
 fn_8004C0BC(record);
 {unsigned int shift=0;const char *q=p;int decoded=0;for(;;){int byte=*q++;decoded|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}p=q;record->unknown00=decoded;}
 if(record->unknown00>=32) return kFailure__3Gap;
 int size=*p++;
 if(size>lbl_8055D81C) return kFailure__3Gap;
 int flags;
 {unsigned int shift=0;int decoded=0;for(;;){int byte=*p++;decoded|=(byte&0x7F)<<shift;if(!(byte&0x80)) break;shift+=7;}flags=decoded;}
 if(flags&1){
  record->unknown08=((p[3]&0xFF)<<24)|((p[2]&0xFF)<<16)|((p[1]&0xFF)<<8)|(p[0]&0xFF);
  {int value;p=unknown800489E4SignedInto(p+4,value);record->unknown0C=value;}
  record->unknown10=unknown800489E4SignedNext(p);
 }
 if(flags&0x200) {int value;p=unknown800489E4UnsignedInto(p,value);record->unknown14=value;}
 if(flags&0x400) record->unknown18=unknown800489E4SignedValue(p);
 if(flags&0x800){int value;p=unknown800489E4Signed(p,&value);record->unknown1C=reinterpret_cast<int>(fn_80074398(object->unknown40,value));}
 if(flags&0x1000) record->unknown20=unknown800489E4Unsigned(p);
 if(flags&0x2000) record->unknown24=unknown800489E4SignedValue(p);
 if(flags&0x4000){int value;p=unknown800489E4Signed(p,&value);record->unknown28=reinterpret_cast<int>(fn_80074398(object->unknown40,value));}
 p=unknown800489E4Signed(p,&record->unknown04);
 if(flags&2){int value;p=unknown800489E4SignedInto(p,value);record->unknown2C=fn_80074398(object->unknown34,value);}
 if(flags&0x40){int value;p=unknown800489E4SignedInto(p,value);record->unknown30=fn_80074398(object->unknown38,value);}
 if(flags&0x80){int value;p=unknown800489E4SignedInto(p,value);record->unknown34=fn_80074398(object->unknown3C,value);}
 if(flags&4){int value;p=unknown800489E4SignedInto(p,value);record->unknown38=fn_80074398(object->unknown40,value);}
 if(flags&0x100){int value;p=unknown800489E4SignedInto(p,value);record->unknown3C=fn_80074398(object->unknown34,value);}
 if(flags&8){
  int value;p=unknown800489E4SignedInto(p,value);record->unknown44=fn_80074398(object->unknown44,value);
  record->unknown48=unknown800489E4Unsigned(p);
 }
 if(flags&0x10){int value;p=unknown800489E4SignedInto(p,value);record->unknown40=fn_80074398(object->unknown34,value);}
 if(flags&0x20){int value;p=unknown800489E4SignedInto(p,value);record->unknown4C=reinterpret_cast<Unknown800489E4Lookup *>(object->unknown48)->slot64(value);}
 if(flags&0x8000){
  record->unknown50=unknown800489E4Unsigned(p);
  int kind;
  do {
   kind=fn_8004C11C(record,index);
   switch(kind){
    case 1:{int value;p=unknown800489E4Signed(p,&value);fn_8004C160(record,index,value);break;}
    case 2:{int value;value=unknown800489E4Unsigned(p);fn_8004C1BC(record,index,value);break;}
    case 3:{int value;p=unknown800489E4SignedInto(p,value);fn_8004C218(record,index,fn_80074398(object->unknown40,value));break;}
    case 0:default:break;
   }
   ++index;
  }while(kind);
 }
 return kSuccess__3Gap;
}
#pragma pop
