////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2017 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.24Release
// Tag = production/akw/20.24.01-0-g5fa480b
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_ANT_CHANNEL_ID_MESG_HPP)
#define FIT_ANT_CHANNEL_ID_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class AntChannelIdMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 ChannelNumber = 0;
       static const FIT_UINT8 DeviceType = 1;
       static const FIT_UINT8 DeviceNumber = 2;
       static const FIT_UINT8 TransmissionType = 3;
       static const FIT_UINT8 DeviceIndex = 4;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    AntChannelIdMesg(void) : Mesg(Profile::MESG_ANT_CHANNEL_ID)
    {
    }

    AntChannelIdMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of channel_number field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsChannelNumberValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns channel_number field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetChannelNumber(void) const
    {
        return GetFieldUINT8Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set channel_number field
    ///////////////////////////////////////////////////////////////////////
    void SetChannelNumber(FIT_UINT8 channelNumber)
    {
        SetFieldUINT8Value(0, channelNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of device_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDeviceTypeValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns device_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetDeviceType(void) const
    {
        return GetFieldUINT8ZValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set device_type field
    ///////////////////////////////////////////////////////////////////////
    void SetDeviceType(FIT_UINT8Z deviceType)
    {
        SetFieldUINT8ZValue(1, deviceType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of device_number field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDeviceNumberValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns device_number field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetDeviceNumber(void) const
    {
        return GetFieldUINT16ZValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set device_number field
    ///////////////////////////////////////////////////////////////////////
    void SetDeviceNumber(FIT_UINT16Z deviceNumber)
    {
        SetFieldUINT16ZValue(2, deviceNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of transmission_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTransmissionTypeValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns transmission_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetTransmissionType(void) const
    {
        return GetFieldUINT8ZValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set transmission_type field
    ///////////////////////////////////////////////////////////////////////
    void SetTransmissionType(FIT_UINT8Z transmissionType)
    {
        SetFieldUINT8ZValue(3, transmissionType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of device_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDeviceIndexValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns device_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_DEVICE_INDEX GetDeviceIndex(void) const
    {
        return GetFieldUINT8Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set device_index field
    ///////////////////////////////////////////////////////////////////////
    void SetDeviceIndex(FIT_DEVICE_INDEX deviceIndex)
    {
        SetFieldUINT8Value(4, deviceIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_ANT_CHANNEL_ID_MESG_HPP)
