//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IOBluetoothDevice, IOBluetoothDeviceInquiry;

@protocol IOBluetoothDeviceInquiryDelegate

@optional
- (void)deviceInquiryComplete:(IOBluetoothDeviceInquiry *)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryDeviceNameUpdated:(IOBluetoothDeviceInquiry *)arg1 device:(IOBluetoothDevice *)arg2 devicesRemaining:(unsigned int)arg3;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(IOBluetoothDeviceInquiry *)arg1 devicesRemaining:(unsigned int)arg2;
- (void)deviceInquiryDeviceFound:(IOBluetoothDeviceInquiry *)arg1 device:(IOBluetoothDevice *)arg2;
- (void)deviceInquiryStarted:(IOBluetoothDeviceInquiry *)arg1;
@end

