//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBCharacteristic, CBPeripheral, CBService, NSString;
@protocol MBKPeripheralDelegate;

@interface MBKPeripheral : NSObject <CBPeripheralDelegate>
{
    CBPeripheral *_peripheral;
    id <MBKPeripheralDelegate> _delegate;
    CBService *_uartService;
    CBCharacteristic *_rxCharacteristic;
    CBCharacteristic *_txCharacteristic;
}

+ (id)hardwareRevisionStringUUID;
+ (id)deviceInformationServiceUUID;
+ (id)rxCharacteristicUUID;
+ (id)txCharacteristicUUID;
+ (id)mbkServiceUUID;
@property(retain) CBCharacteristic *txCharacteristic; // @synthesize txCharacteristic=_txCharacteristic;
@property(retain) CBCharacteristic *rxCharacteristic; // @synthesize rxCharacteristic=_rxCharacteristic;
@property(retain) CBService *uartService; // @synthesize uartService=_uartService;
@property(nonatomic) id <MBKPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;
- (void)dealloc;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)writeRawData:(id)arg1;
- (void)writeString:(id)arg1;
- (void)didDisconnect;
- (void)didConnect;
- (id)initWithPeripheral:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
