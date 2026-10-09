#include <igCore/igCoreAll.h>
#include <igGap.h>   
extern "C" {
    void *malloc(unsigned long);
    void free(void *);
    char *strncpy(char *, const char *, unsigned long);
    unsigned long strlen(const char *);
    void *memset(void *, int, unsigned long);
}

struct UnknownResult { Gap::igInt unknown00; UnknownResult(const UnknownResult&); };

// Partial ABI view: the MW vtable reserves its first two words.
// Slots 0x08..0xA4 are placeholders; their signatures remain unrecovered.
class Unknown805621C8 {
    virtual void unknown08();
    virtual void unknown0C();
    virtual void unknown10();
    virtual void unknown14();
    virtual void unknown18();
    virtual void unknown1C();
    virtual void unknown20();
    virtual void unknown24();
    virtual void unknown28();
    virtual void unknown2C();
    virtual void unknown30();
    virtual void unknown34();
    virtual void unknown38();
    virtual void unknown3C();
    virtual void unknown40();
    virtual void unknown44();
    virtual void unknown48();
    virtual void unknown4C();
    virtual void unknown50();
    virtual void unknown54();
    virtual void unknown58();
    virtual void unknown5C();
    virtual void unknown60();
    virtual void unknown64();
    virtual void unknown68();
    virtual void unknown6C();
    virtual void unknown70();
    virtual void unknown74();
    virtual void unknown78();
    virtual void unknown7C();
    virtual void unknown80();
    virtual void unknown84();
    virtual void unknown88();
    virtual void unknown8C();
    virtual void unknown90();
    virtual void unknown94();
    virtual void unknown98();
    virtual void unknown9C();
    virtual void unknownA0();
    virtual void unknownA4();
public:
    virtual void unknownA8();
    virtual void unknownAC();
    virtual void unknownB0();
    virtual void unknownB4();
    virtual UnknownResult unknownB8();
    virtual void unknownBC();
    virtual void unknownC0();
    virtual void unknownC4();
    virtual void unknownC8();
    virtual void unknownCC();
    virtual void unknownD0();
    virtual void unknownD4();
    virtual void unknownD8();
    virtual void unknownDC();
    virtual void unknownE0();
    virtual void unknownE4();
    virtual void unknownE8();
    virtual void unknownEC();
    virtual void unknownF0();
    virtual void unknownF4();
    virtual void unknownF8();
    virtual void unknownFC();
    virtual void unknown100();
    virtual void unknown104();
    virtual void unknown108();
    virtual void unknown10C(Gap::igInt);
};

// Address-based declarations preserve unrecovered dependency types and names.
extern "C" {
    void fn_80092280();
    void *fn_8006070C(Gap::igUnsignedInt);
    void *fn_8005AF08(void *);
    void *fn_800607F4(void *);
    void *fn_8002DB4C(void *);
    Gap::igUnsignedInt fn_8005641C(void *);
    void fn_8005383C(void *, Gap::igInt);
    void *fn_800560F8(Gap::igUnsignedInt);
    void *fn_8003E848(void *);
    void fn_8002A0A8();
    void fn_8002AAD4();
    void fn_80039D6C();
    void fn_800396F8();
    void fn_80038E9C();
    void fn_8003922C();
    void fn_8002CBBC();
    void fn_80036A94();
    void fn_800368D4();
    void fn_80036684();
    void fn_800364C4();
    void fn_80035D80();
    void fn_80035BC0();
    void fn_800249F4();
    void fn_80024334();
    void fn_80038478();
    void fn_80038244();
    void fn_8003BDD8();
    void fn_8002D584();
    void fn_80030D50();
    void fn_8002FACC();
    void fn_8002CFA8();
    void fn_8002320C();
    void *fn_80027824();

    extern void *lbl_805621C8;
    extern void *lbl_805621E0;
    extern void *lbl_8056229C;
    extern void *lbl_80561688;
}

// These local views record observed offsets and calling conventions only.
extern "C" {
    void fn_80066E1C(void *);
    void __dl__FPv(void *);
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    void *fn_80053FF4(void *, Gap::igInt);
    const char *fn_80054094(void *, const char *);
    const char *fn_8009F35C(const char *);
    void fn_8004730C(void *, const char *);
    void fn_8004CFA4(Gap::igInt);
    void fn_80053DD8(void *, Gap::igInt);
    void fn_80053EA0(void *, Gap::igInt, void *);
    void fn_800922AC();
    void fn_80056378(void *);
    void fn_800564E8(void *);
    void *fn_80056138(Gap::igUnsignedInt, void *);
    void *fn_8005624C(void *, Gap::igUnsignedInt);
    void *fn_80053E6C(void *);
    void *fn_80053910(void *, void *, const char *);
    extern void *lbl_80562140;
    extern void *lbl_8056176C;
    extern char lbl_8055D760[8], lbl_8055D768[2], lbl_8055D784[8], lbl_8055D78C[7];
    extern char *lbl_8055D824, *lbl_8055D828, *lbl_8055D82C;
}
namespace Gap { namespace Core { extern igArkCore *_arkCore; } }

struct UnknownRefObject {
    void *unknown00;
    Gap::igUnsignedInt unknown04;
    inline void release(){
        --unknown04;
        // Reload after the decrement, as observed in the original object operations.
        if(!(reinterpret_cast<volatile Gap::igUnsignedInt*>(&unknown04)[0] & 0x7FFFFF))
            fn_80066E1C(this);
    }
    inline void addRef(){ ++unknown04; }
};

struct UnknownStringRef {
    const char *unknown00;
    inline void release() const {
        if(unknown00)
            reinterpret_cast<Gap::Core::igStringPoolItemId>(unknown00 - 8)->release();
    }
    inline void acquire(const char *value){
        if(!lbl_80562140){
            void *storage = fn_80054140(0x10);
            if(storage) storage = fn_80053F28(storage);
            lbl_80562140 = storage;
        }
        const char *pooled = fn_80054094(lbl_80562140, value);
        release();
        unknown00 = pooled;
    }
    inline void assign(const UnknownStringRef& value){
        if(value.unknown00)
            ++reinterpret_cast<Gap::igUnsignedInt*>(const_cast<char*>(value.unknown00))[-1];
        release();
        unknown00 = value.unknown00;
    }
};

class UnknownVirtualObject {
public:
    virtual void unknown08();
    virtual void unknown0C();
    virtual void unknown10();
    virtual void unknown14();
    virtual void unknown18();
    virtual void unknown1C();
    virtual void unknown20();
    virtual void unknown24();
    virtual void unknown28();
    virtual void unknown2C();
    virtual void unknown30();
    virtual void unknown34();
    virtual void unknown38();
    virtual void unknown3C();
    virtual void unknown40();
    virtual void unknown44();
    virtual void unknown48();
    virtual void unknown4C();
    virtual void unknown50();
    virtual void unknown54();
    virtual void unknown58();
    virtual void unknown5C();
    virtual UnknownResult unknown60(void *, Gap::igUnsignedLong, Gap::igBool);
    virtual void unknown64();
    virtual void *unknown68();
    virtual void unknown6C();
    virtual void unknown70();
    virtual void unknown74();
    virtual void unknown78();
    virtual void unknown7C();
    virtual void unknown80();
    virtual void unknown84();
    virtual UnknownResult unknown88(Gap::igBool);
    virtual UnknownResult unknown8C(Gap::igUnsignedLong);
    virtual void unknown90();
    virtual void unknown94();
    virtual void unknown98();
    virtual void unknown9C();
    virtual void unknownA0();
    virtual void unknownA4();
    virtual Gap::igUnsignedLong unknownA8();
    virtual void unknownAC();
    virtual void unknownB0();
    virtual void unknownB4();
    virtual void unknownB8();
    virtual void unknownBC();
    virtual void unknownC0();
    virtual void unknownC4();
    virtual void unknownC8();
    virtual void unknownCC();
    virtual void unknownD0();
    virtual void unknownD4();
    virtual void unknownD8();
    virtual void unknownDC();
    virtual void unknownE0();
    virtual void unknownE4();
    virtual void unknownE8();
    virtual void unknownEC();
    virtual void unknownF0();
    virtual void unknownF4();
    virtual void unknownF8();
    virtual void unknownFC();
    virtual void unknown100();
    virtual void unknown104();
    virtual void unknown108();
    virtual void unknown10C();
    virtual void unknown110();
    virtual void unknown114();
    virtual void unknown118();
    virtual void unknown11C();
    virtual void unknown120();
    virtual void unknown124();
    virtual void unknown128();
    virtual void unknown12C();
    virtual void unknown130();
    virtual void unknown134();
    virtual void unknown138();
    virtual void unknown13C();
    virtual void unknown140();
    virtual void unknown144();
    virtual void unknown148();
    virtual void unknown14C();
    virtual void unknown150();
    virtual void unknown154();
    virtual void unknown158();
    virtual void unknown15C();
    virtual void unknown160();
    virtual void *unknown164();
    virtual void unknown168(void *);
};

struct UnknownCallbacks {
    void **unknown00;
    Gap::igInt unknown04;
    Gap::igInt unknown08;
};
extern "C" void *fn_8003E85C(UnknownCallbacks *, Gap::igInt);
extern "C" void fn_8003E8B8(UnknownCallbacks *, void *);

extern "C" {
    void *fn_80026ADC(void *);
    Gap::igBool fn_8006CD10();
    void *fn_80060934();
    UnknownRefObject *fn_8002C0C0(void *);
    void fn_8005852C(const char *, const char *, unsigned long);
    void fn_8006CD50(void *, const char *, const char *);
    void *fn_80031A84(void *);
    void fn_80044A9C(void *, Gap::igInt);
    void fn_8002F178();
    void *fn_80027D28(void *);
    void fn_8006BAAC(void *);
    void fn_8006B75C(void *, const char *, const char *, Gap::igInt);
    void fn_8006F1B4();
    void *fn_8002648C(void *);
    UnknownRefObject *fn_80032668(void *);
    void fn_8006F404(void *, UnknownRefObject *);
    void fn_80043D44(void *);
    UnknownRefObject *fn_8002A420(void *);
    void fn_80066490(void *, const char *);
    void fn_80042F78(void *, void *);
    void fn_8006DC50(void *, Gap::igInt, const char *, void *, Gap::igInt, Gap::igInt);
    void fn_8006D534(void *, Gap::igInt, const char *, void *, Gap::igInt, Gap::igInt);
    void *fn_80039920(void *);
    void *fn_80058CA4();
    void *fn_80030C18(void *);
    void fn_800472FC(void *, Gap::igInt);
    void fn_8004D0E8();
    void *fn_80023670(void *);
    void fn_8006B434(const char *, ...);
    void fn_8006B6CC();
    Gap::igInt fn_8006D2E8(void *, const char *, Gap::igInt);
    Gap::igInt fn_8006E2A4(void *);
    void *fn_8002487C(void *);
    void fn_800740F4(void *, Gap::igInt);
    void fn_800740FC(void *, Gap::igInt);
    void fn_80074104(void *);
    void *fn_8006E290(void *, Gap::igInt);
    void fn_800743E4(void *, const char *);
    void *fn_8003E474(void *, const char *);
    UnknownResult fn_80066114(void *, void *);
    void fn_800730B4(Gap::igInt);
    void fn_8007036C(void *);
    void fn_8006F8CC(void *);
    void fn_8004714C(void *, void *);
    void fn_8007028C(void *);
    void fn_8006F33C();
    void fn_8006B35C(void *);
    void fn_8006B3C8(void *);
    extern char lbl_80463100[], lbl_8046A9F8[];
    extern unsigned char lbl_8055DBBC, lbl_80562298;
    extern const char *lbl_80562110;
    extern void *lbl_805621F0, *lbl_805621F4, *lbl_80562104, *lbl_805622FC;
    extern char lbl_8055D4C4[1], lbl_8055D76C[5], lbl_8055D774[5], lbl_8055D77C[5];
    extern Gap::igInt lbl_8055D748;
    extern const char *lbl_8055DC4C;
    extern UnknownCallbacks *lbl_80562158, *lbl_8056215C;
}
struct UnknownObjectRef {
    UnknownRefObject *unknown00;
    inline ~UnknownObjectRef(){ if(unknown00) unknown00->release(); }
    inline void assign(UnknownRefObject *value){
        if(value) value->addRef();
        if(unknown00) unknown00->release();
        unknown00 = value;
    }
    inline UnknownObjectRef& operator=(const UnknownObjectRef& value){ assign(value.unknown00); return *this; }
};

// Access only observed storage; no class-field meanings are inferred.
#define ARK_FIELD(type, offset) reinterpret_cast<type*>(_unknown16 + (offset) - 0x16)[0]

extern "C" {
    void fn_8003D4AC(void *);
    void fn_8003E224(void *);
}

// Recovery partitions let independently verified ranges link from this source.
// These are synthetic boundaries, not established original translation units.
#ifndef IG_ARKCORE_RECOVERY_PART
#define IG_ARKCORE_RECOVERY_PART 0
#endif

#if IG_ARKCORE_RECOVERY_PART == 0

namespace Gap{
    namespace Core{

        void igArkCore::checkAlchemyVersion(igInt alchemyVersion){

            // The version-mismatch gate is at 0x79; the surrounding fields remain unrecovered.
            if(alchemyVersion != IG_ALCHEMY_VERSION &&
               reinterpret_cast<const igBool*>(_unknown16)[0x79 - 0x16] == true){
                IG_PRIVATE_REPORT_ERROR((
                "The headers used to build the Alchemy Core (version %d) do not match the currently registring dll or application (version %d).\n"
                "This usually means some API changed and you are likely to get unexpected behaviour.\n"
                "To try and load the dll or application anyways, try putting \nfailOnDllVersionMismatch = false in the CORE section of your alchemy.ini",
                IG_ALCHEMY_VERSION, alchemyVersion));
            }
        }

        igArkCore::igArkCore(){
            _unknown14 = 0;
            _preExitStarted = false;
            _unknown16[0] = 0;
            _isBootstrapped = false;
            // Word and byte writes are known; meanings of this storage remain unrecovered.
            reinterpret_cast<igInt*>(_unknown16 + 0x18 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x30 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x20 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x24 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x28 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x2C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x38 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x44 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x48 - 0x16)[0] = 0;
            _unknown16[0x74 - 0x16] = 0;
            _unknown16[0x75 - 0x16] = 0;
            _unknown16[0x76 - 0x16] = 0;
            _unknown16[0x77 - 0x16] = 0;
            _unknown16[0x78 - 0x16] = 0;
            _unknown16[0x79 - 0x16] = 0;
            _unknown16[0x7A - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x7C - 0x16)[0] = 0x80000;
            reinterpret_cast<igInt*>(_unknown16 + 0x80 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x84 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x88 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x8C - 0x16)[0] = -1;
            _unknown16[0x90 - 0x16] = 0;
            _unknown16[0x110 - 0x16] = 0;
            _unknown16[0x190 - 0x16] = 0;
            _unknown16[0x210 - 0x16] = 0;
            _unknown16[0x310 - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x50 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x54 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x34 - 0x16)[0] = 0;
            _unknown16[0x5C - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x60 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x58 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x64 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x68 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x3C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x394 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x4C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x6C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x70 - 0x16)[0] = 0;
        }

        void igArkCore::initBootstrap(){
            _unknown14 = 1;
            fn_80092280();
            reinterpret_cast<igInt*>(_unknown16 + 0x394 - 0x16)[0] = 0;

            if(!lbl_805621C8){
                void *storage = fn_8006070C(0x19F4);
                if(storage)
                    storage = fn_8005AF08(storage);
                lbl_805621C8 = storage;
            }
            // Observed vtable slots; the class and method meanings remain unknown.
            reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownA8();

            reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0] =
                fn_8002DB4C(fn_800607F4(lbl_805621E0));
            void *unknown18 = reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0];
            void *unknown08 = reinterpret_cast<void**>(unknown18)[0x08 / 4];
            igInt count = !unknown08 ? 0 : fn_8005641C(unknown08) >> 2;
            if(count <= 0x400)
                fn_8005383C(unknown18, 0x400);

            reinterpret_cast<void**>(_unknown16 + 0x24 - 0x16)[0] =
                fn_8002DB4C(fn_800607F4(lbl_805621E0));
            void *storage = fn_800560F8(0xC);
            if(storage)
                storage = fn_8003E848(storage);
            reinterpret_cast<void**>(_unknown16 + 0x28 - 0x16)[0] = storage;
            storage = fn_800560F8(0xC);
            if(storage)
                storage = fn_8003E848(storage);
            reinterpret_cast<void**>(_unknown16 + 0x2C - 0x16)[0] = storage;

            fn_8002A0A8();
            _isBootstrapped = true;
            _numBSMetaObjects = reinterpret_cast<igInt*>(
                reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0])[0x0C / 4];
            _numBSMetaFields = reinterpret_cast<igInt*>(lbl_8056229C)[0x0C / 4];
            fn_8002AAD4();
            fn_80039D6C();
            fn_800396F8();
            fn_80038E9C();
            fn_8003922C();
            fn_8002CBBC();
            fn_80036A94();
            fn_800368D4();
            fn_80036684();
            fn_800364C4();
            fn_80035D80();
            fn_80035BC0();
            fn_800249F4();
            fn_80024334();
            fn_80038478();
            fn_80038244();
            fn_8003BDD8();
            fn_8002D584();
            fn_80030D50();
            fn_8002FACC();
            fn_8002CFA8();
            fn_8002320C();
            lbl_80561688 = fn_80027824();
            reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownAC();
        }

    }
}

extern "C" const char *fn_8003D49C(void *self){
    return reinterpret_cast<UnknownStringRef*>(static_cast<char*>(self) + 0x398)->unknown00;
}

extern "C" const char *fn_8003D4A4(void *self){
    return reinterpret_cast<UnknownStringRef*>(static_cast<char*>(self) + 0x39C)->unknown00;
}

#pragma auto_inline off
extern "C" void fn_8003D4AC(void *self){
    Gap::Core::igStringRef path;
    reinterpret_cast<UnknownStringRef*>(&path)->acquire(fn_8009F35C(lbl_8055D760));
    reinterpret_cast<UnknownStringRef*>(static_cast<char*>(self) + 0x398)->assign(*reinterpret_cast<UnknownStringRef*>(&path));
    reinterpret_cast<UnknownStringRef*>(static_cast<char*>(self) + 0x39C)->acquire(lbl_8055D768);
}
#pragma auto_inline reset

namespace Gap{
    namespace Core{

        void igArkCore::initCore(){
            const char *data = lbl_80463100;
            fn_8003D4AC(this);
            ARK_FIELD(void *, 0x38) = fn_80026ADC(fn_800607F4(lbl_805621E0));
            if(lbl_8055DBBC && fn_8006CD10()){
                if(lbl_80562110){
                    void *storage = fn_80060934();
                    storage = lbl_80562298 ? storage : fn_800607F4(lbl_805621F0);
                    UnknownObjectRef ref;
                    ref.unknown00 = fn_8002C0C0(storage);
                    fn_8005852C(data + 0x5D54, lbl_80562110, strlen(lbl_80562110));
                    *reinterpret_cast<UnknownObjectRef*>(reinterpret_cast<char*>(ARK_FIELD(void *, 0x38)) + 0x0C) = ref;
                }
                fn_8006CD50(ARK_FIELD(void *, 0x38), lbl_8055D4C4, lbl_8055D4C4);
            }
            ARK_FIELD(void *, 0x3C) = fn_80031A84(fn_800607F4(lbl_805621E0));
            fn_80044A9C(ARK_FIELD(void *, 0x3C), 0);
            fn_8002F178();
            ARK_FIELD(void *, 0x4C) = fn_80027D28(fn_800607F4(lbl_805621E0));
            fn_8006BAAC(ARK_FIELD(void *, 0x4C));
            fn_8006B75C(ARK_FIELD(void *, 0x4C), lbl_8055D76C, lbl_8055D774, 1);
            _numTrackedObjects = reinterpret_cast<igInt*>(ARK_FIELD(void *, 0x18))[3];
            _numTrackedFields = reinterpret_cast<igInt*>(lbl_8056229C)[3];
            fn_8006F1B4();
            ARK_FIELD(void *, 0x40) = fn_8002648C(fn_800607F4(lbl_805621E0));
            lbl_80562104 = ARK_FIELD(void *, 0x40);
            void *storage = fn_80060934();
            storage = lbl_80562298 ? storage : fn_800607F4(lbl_805621F0);
            UnknownObjectRef ref;
            UnknownRefObject *newObject = fn_80032668(storage);
            ref.unknown00 = newObject;
            reinterpret_cast<UnknownStringRef*>(reinterpret_cast<char*>(newObject) + 0x14)->acquire(lbl_8046A9F8);
            fn_8006F404(ARK_FIELD(void *, 0x40), ref.unknown00);
            fn_80043D44(ref.unknown00);
            UnknownObjectRef ref2;
            ref2.unknown00 = fn_8002A420(fn_800607F4(lbl_805621F4));
            fn_80066490(ref2.unknown00, data + 0x5D60);
            fn_80042F78(ref.unknown00, ref2.unknown00);
            fn_8006DC50(ARK_FIELD(void *, 0x38), 2, data + 0x5D70, _unknown16 + 0x79 - 0x16, 1, 0);
            fn_8006DC50(ARK_FIELD(void *, 0x38), 2, data + 0x5D8C, _unknown16 + 0x7A - 0x16, 1, 0);
            fn_8006D534(ARK_FIELD(void *, 0x38), 2, data + 0x5DA4, _unknown16 + 0x48 - 0x16, 0, 0);
            if(lbl_805621C8)
                reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownB8();
            if(ARK_FIELD(igUnsignedInt, 0x48)){
                ARK_FIELD(void *, 0x44) = fn_80039920(0);
                void *buffer = fn_800560F8(ARK_FIELD(igUnsignedInt, 0x48));
                memset(buffer, 0, ARK_FIELD(igUnsignedInt, 0x48));
                ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown60(buffer, ARK_FIELD(igUnsignedInt, 0x48), 1);
                ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown8C(ARK_FIELD(UnknownVirtualObject *, 0x44)->unknownA8());
                if(ARK_FIELD(unsigned char, 0x74) && ARK_FIELD(unsigned char, 0x75)){
                    void *storage2 = fn_80030C18(fn_80058CA4());
                    fn_800472FC(storage2, 0x4000);
                    reinterpret_cast<UnknownVirtualObject*>(storage2)->unknown5C();
                    ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown168(storage2);
                }
                ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown78();
                void *owner = ARK_FIELD(void *, 0x40);
                UnknownRefObject *incoming = ARK_FIELD(UnknownRefObject *, 0x44);
                if(incoming) incoming->addRef();
                UnknownRefObject *old = reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4];
                if(old) old->release();
                reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4] = incoming;
            }
            fn_8006D534(ARK_FIELD(void *, 0x38), 2, data + 0x5DC0, _unknown16 + 0x390 - 0x16, 0, 0);
            fn_8004D0E8();
            lbl_805622FC = fn_80023670(ARK_FIELD(void *, 0x34));
            reinterpret_cast<UnknownVirtualObject*>(lbl_805622FC)->unknown6C();
            fn_8006B434(lbl_8055D77C, lbl_8055D748);
            fn_8006B6CC();
            if(ARK_FIELD(igInt, 0x64)){
                igInt index = fn_8006D2E8(ARK_FIELD(void *, 0x38), data + 0x5DDC, 1);
                if(index != -1){
                    igInt count = fn_8006E2A4(ARK_FIELD(void *, 0x38));
                    ARK_FIELD(void *, 0x68) = fn_8002487C(fn_800607F4(lbl_805621E0));
                    fn_800740F4(ARK_FIELD(void *, 0x68), 0x200);
                    fn_800740FC(ARK_FIELD(void *, 0x68), 0x10);
                    fn_80074104(ARK_FIELD(void *, 0x68));
                    const char *value;
                    for(igInt i = 0; i < count; ++i){
                        void *entry = fn_8006E290(ARK_FIELD(void *, 0x38), i);
                        if(entry && reinterpret_cast<igInt*>(entry)[2] == index){
                            void *object = reinterpret_cast<void**>(entry)[3];
                            if(object){
                                const char *value = reinterpret_cast<const char**>(object)[2];
                                const char *resolved = !value ? lbl_8055DC4C : value;
                                if(resolved){
                                    if(!value) value = lbl_8055DC4C;
                                    if(*value == '0') continue;
                                }
                            }
                            value = reinterpret_cast<const char**>(reinterpret_cast<void**>(entry)[4])[2];
                            if(!value) value = lbl_8055DC4C;
                            fn_800743E4(ARK_FIELD(void *, 0x68), value);
                            if(ARK_FIELD(void *, 0x60)){
                                void *found = fn_8003E474(this, value);
                                if(found) fn_80066114(found, ARK_FIELD(void *, 0x60));
                            }
                        }
                    }
                }
            }
            fn_800730B4(1);
        }

    }
}

extern "C" void *dtor_8003DC20(UnknownRefObject **self, Gap::igInt flag){
    if(self){
        if(*self) (*self)->release();
        if(static_cast<short>(flag) > 0) __dl__FPv(self);
    }
    return self;
}

namespace Gap{
    namespace Core{

        void igArkCore::preExit(){
            _preExitStarted = true;
            UnknownVirtualObject *object = reinterpret_cast<UnknownVirtualObject**>(_unknown16 + 0x54 - 0x16)[0];
            if(object){
                object->unknownB8();
                fn_8004730C(reinterpret_cast<void**>(_unknown16 + 0x54 - 0x16)[0], lbl_8055D784);
            }
        }

        void igArkCore::exit(){
            fn_8007036C(ARK_FIELD(void *, 0x40));
            if(reinterpret_cast<unsigned char*>(ARK_FIELD(void *, 0x40))[0x1C])
                fn_8006F8CC(ARK_FIELD(void *, 0x40));
            {
                void *owner = ARK_FIELD(void *, 0x40);
                UnknownRefObject *object = reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4];
                if(object) object->release();
                reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4] = 0;
            }
            {
                void *owner = ARK_FIELD(void *, 0x40);
                UnknownRefObject *object = reinterpret_cast<UnknownRefObject**>(owner)[0x40 / 4];
                if(object) object->release();
                reinterpret_cast<UnknownRefObject**>(owner)[0x40 / 4] = 0;
            }
            {
                void *owner = ARK_FIELD(void *, 0x40);
                UnknownRefObject *object = reinterpret_cast<UnknownRefObject**>(owner)[0x3C / 4];
                if(object) object->release();
                reinterpret_cast<UnknownRefObject**>(owner)[0x3C / 4] = 0;
            }
            fn_800730B4(0);
            {
                igInt offset;
                igInt count;
                UnknownVirtualObject * object;
                igInt i;
                count = lbl_8056215C->unknown04;
                i = 0;
                offset = 0;
                while(i < count){
                    object = *reinterpret_cast<UnknownVirtualObject**>(reinterpret_cast<char*>(lbl_8056215C->unknown00) + offset);
                    if(object){
                        object->unknown88(0);
                        void *value = object->unknown164();
                        if(value) fn_8004714C(value, 0);
                    }
                    ++i;
                    offset += 4;
                }
            }
            {
                igInt i;
                igInt count;
                UnknownVirtualObject * object;
                igInt offset;
                count = lbl_80562158->unknown04;
                i = 0;
                offset = 0;
                while(i < count){
                    object = *reinterpret_cast<UnknownVirtualObject**>(reinterpret_cast<char*>(lbl_80562158->unknown00) + offset);
                    if(object){
                        object->unknown88(0);
                        void *value = object->unknown164();
                        if(value) fn_8004714C(value, 0);
                    }
                    ++i;
                    offset += 4;
                }
            }
            if(lbl_805621C8)
                reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownC4();
            fn_8003E224(this);
            _unknown16[0] = 1;
            igInt count = ARK_FIELD(UnknownCallbacks *, 0x28)->unknown04;
            while(--count >= 0)
                reinterpret_cast<void (*)()>(*reinterpret_cast<void**>(reinterpret_cast<char*>(ARK_FIELD(UnknownCallbacks *, 0x28)->unknown00) + count * sizeof(void*)))();
            fn_8003E85C(ARK_FIELD(UnknownCallbacks *, 0x28), 1);
            ARK_FIELD(void *, 0x28) = 0;
            fn_8007028C(ARK_FIELD(void *, 0x40));
            ARK_FIELD(UnknownRefObject *, 0x3C)->release();
            reinterpret_cast<UnknownRefObject*>(lbl_805622FC)->release();
            fn_80053DD8(lbl_8056229C, _numTrackedFields);
            for(igInt i = reinterpret_cast<igInt*>(ARK_FIELD(void *, 0x18))[3] - 1; i >= _numTrackedObjects; --i)
                fn_80053EA0(ARK_FIELD(void *, 0x18), i, 0);
            ARK_FIELD(UnknownRefObject *, 0x4C)->release();
            ARK_FIELD(void *, 0x4C) = 0;
            if(ARK_FIELD(void *, 0x44)){
                ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown80();
                void *buffer = ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown68();
                if(buffer){
                    ARK_FIELD(UnknownVirtualObject *, 0x44)->unknown60(0, 0, 0);
                    fn_80056378(buffer);
                }
                void *owner = ARK_FIELD(void *, 0x40);
                UnknownRefObject *object = reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4];
                if(object) object->release();
                reinterpret_cast<UnknownRefObject**>(owner)[0x38 / 4] = 0;
                ARK_FIELD(UnknownRefObject *, 0x44)->release();
                ARK_FIELD(void *, 0x44) = 0;
            }
            if(ARK_FIELD(void *, 0x68)){
                ARK_FIELD(UnknownRefObject *, 0x68)->release();
                ARK_FIELD(void *, 0x68) = 0;
            }
            if(ARK_FIELD(void *, 0x50)){
                ARK_FIELD(UnknownRefObject *, 0x50)->release();
                ARK_FIELD(void *, 0x50) = 0;
            }
            ARK_FIELD(UnknownRefObject *, 0x38)->release();
            ARK_FIELD(UnknownRefObject *, 0x40)->release();
            fn_8006F33C();
            fn_8006B35C(0);
            fn_8006B3C8(0);
            reinterpret_cast<UnknownStringRef*>(&_alchemyPath)->acquire(0);
            reinterpret_cast<UnknownStringRef*>(&_applicationPath)->acquire(0);
        }

    }
}

extern "C" void fn_8003E224(void *self){
    char *bytes = static_cast<char*>(self);
    UnknownVirtualObject *object = *reinterpret_cast<UnknownVirtualObject**>(bytes + 0x54);
    if(object){
        object->unknownBC();
        fn_8004730C(*reinterpret_cast<void**>(bytes + 0x54), lbl_8055D78C);
    }
    if(reinterpret_cast<unsigned char*>(bytes)[0x75] && lbl_805621C8)
        reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownE0();
}

namespace Gap{
    namespace Core{

        void igArkCore::exitBootstrap(){
            reinterpret_cast<UnknownRefObject**>(_unknown16 + 0x24 - 0x16)[0]->release();
            reinterpret_cast<void**>(_unknown16 + 0x24 - 0x16)[0] = 0;
            fn_8004CFA4(0);
            fn_8003E85C(reinterpret_cast<UnknownCallbacks**>(_unknown16 + 0x2C - 0x16)[0], 1);
            if(lbl_805621C8)
                reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownBC();
            fn_80053DD8(lbl_8056229C, _numBSMetaFields);
            for(igInt i = _numTrackedObjects - 1; i >= _numBSMetaObjects; --i)
                fn_80053EA0(reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0], i, 0);
            _isBootstrapped = false;
            reinterpret_cast<UnknownRefObject*>(lbl_8056229C)->release();
            reinterpret_cast<UnknownRefObject**>(_unknown16 + 0x18 - 0x16)[0]->release();
            UnknownRefObject *object = reinterpret_cast<UnknownRefObject**>(_unknown16 + 0x70 - 0x16)[0];
            if(object) object->release();
            if(!lbl_80562140){
                void *storage = fn_80054140(0x10);
                if(storage) storage = fn_80053F28(storage);
                lbl_80562140 = storage;
            }
            fn_80053FF4(lbl_80562140, 1);
            _unknown14 = 0;
            if(lbl_805621C8){
                reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownB0();
                if(lbl_805621C8)
                    reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknown10C(1);
                lbl_805621C8 = 0;
            }
            fn_800922AC();
        }

    }
}

extern "C" void *fn_8003E450(void *self){
    return fn_80053E6C(*reinterpret_cast<void**>(static_cast<char*>(self) + 0x18));
}

extern "C" void *fn_8003E474(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(*reinterpret_cast<Gap::igBool*>(bytes))
        return fn_80053910(*reinterpret_cast<void**>(bytes + 0x18), lbl_8056176C, value);
    return 0;
}

extern "C" void *fn_8003E4B4(void *self){
    return fn_80053E6C(*reinterpret_cast<void**>(static_cast<char*>(self) + 0x24));
}

extern "C" void fn_8003E4D8(void *self, void *value){
    fn_8003E8B8(*reinterpret_cast<UnknownCallbacks**>(static_cast<char*>(self) + 0x28), value);
}

#endif

#if IG_ARKCORE_RECOVERY_PART == 1

extern "C" void fn_8003E574(void *self, void *value){
    char *bytes = static_cast<char*>(self);
    Gap::igInt offset;
    Gap::igInt count = (*reinterpret_cast<UnknownCallbacks**>(bytes + 0x2C))->unknown04;
    Gap::igInt i = 0;
    offset = 0;
    while(i < count){
        (*reinterpret_cast<void (**)(void *)>(reinterpret_cast<char*>((*reinterpret_cast<UnknownCallbacks**>(bytes + 0x2C))->unknown00) + offset))(value);
        ++i;
        offset += 4;
    }
}

extern "C" void fn_8003E5E4(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value){
        strncpy(bytes + 0x90, value, 0x7F);
        bytes[0x10F] = 0;
    }else
        bytes[0x90] = 0;
    if(value && *value)
        lbl_8055D824 = bytes + 0x90;
}

extern "C" void fn_8003E658(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value){
        strncpy(bytes + 0x110, value, 0x7F);
        bytes[0x18F] = 0;
    }else
        bytes[0x110] = 0;
    if(value && *value)
        lbl_8055D828 = bytes + 0x110;
}

extern "C" void fn_8003E6CC(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value){
        strncpy(bytes + 0x190, value, 0x7F);
        bytes[0x20F] = 0;
    }else
        bytes[0x190] = 0;
    if(value && *value)
        lbl_8055D82C = bytes + 0x190;
}

extern "C" void fn_8003E740(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value && *value){
        strncpy(bytes + 0x210, value, 0x7F);
        bytes[0x28F] = 0;
    }else
        bytes[0x210] = 0;
}

extern "C" void fn_8003E79C(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value && *value){
        strncpy(bytes + 0x290, value, 0x7F);
        bytes[0x30F] = 0;
    }else
        bytes[0x290] = 0;
}

extern "C" void fn_8003E7F8(void *self, const char *value){
    char *bytes = static_cast<char*>(self);
    if(value){
        strncpy(bytes + 0x310, value, 0x7F);
        bytes[0x38F] = 0;
    }else
        bytes[0x310] = 0;
}

extern "C" void *fn_8003E848(void *self){
    UnknownCallbacks *object = static_cast<UnknownCallbacks*>(self);
    object->unknown00 = 0;
    object->unknown08 = 0;
    object->unknown04 = 0;
    return self;
}

extern "C" void *fn_8003E85C(UnknownCallbacks *self, Gap::igInt flag){
    if(self){
        if(self->unknown00) fn_80056378(self->unknown00);
        if(static_cast<short>(flag) > 0) fn_800564E8(self);
    }
    return self;
}

#endif

#if IG_ARKCORE_RECOVERY_PART == 2

namespace Gap{
    namespace Core{

    void *igArkCore::operator new(size_t size){ return malloc(size); }

    void igArkCore::operator delete(void *ptr){ free(ptr); }

    }
}

#endif
