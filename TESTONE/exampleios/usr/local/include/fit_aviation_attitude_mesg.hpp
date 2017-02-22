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


#if !defined(FIT_AVIATION_ATTITUDE_MESG_HPP)
#define FIT_AVIATION_ATTITUDE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class AviationAttitudeMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 TimestampMs = 0;
       static const FIT_UINT8 SystemTime = 1;
       static const FIT_UINT8 Pitch = 2;
       static const FIT_UINT8 Roll = 3;
       static const FIT_UINT8 AccelLateral = 4;
       static const FIT_UINT8 AccelNormal = 5;
       static const FIT_UINT8 TurnRate = 6;
       static const FIT_UINT8 Stage = 7;
       static const FIT_UINT8 AttitudeStageComplete = 8;
       static const FIT_UINT8 Track = 9;
       static const FIT_UINT8 Validity = 10;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    AviationAttitudeMesg(void) : Mesg(Profile::MESG_AVIATION_ATTITUDE)
    {
    }

    AviationAttitudeMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Timestamp message was output
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Timestamp message was output
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Fractional part of timestamp, added to timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Fractional part of timestamp, added to timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of system_time
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumSystemTime(void) const
    {
        return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of system_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSystemTimeValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns system_time field
    // Units: ms
    // Comment: System time associated with sample expressed in ms.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetSystemTime(FIT_UINT8 index) const
    {
        return GetFieldUINT32Value(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set system_time field
    // Units: ms
    // Comment: System time associated with sample expressed in ms.
    ///////////////////////////////////////////////////////////////////////
    void SetSystemTime(FIT_UINT8 index, FIT_UINT32 systemTime)
    {
        SetFieldUINT32Value(1, systemTime, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of pitch
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumPitch(void) const
    {
        return GetFieldNumValues(2, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of pitch field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPitchValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns pitch field
    // Units: radians
    // Comment: Range -PI/2 to +PI/2
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPitch(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(2, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set pitch field
    // Units: radians
    // Comment: Range -PI/2 to +PI/2
    ///////////////////////////////////////////////////////////////////////
    void SetPitch(FIT_UINT8 index, FIT_FLOAT32 pitch)
    {
        SetFieldFLOAT32Value(2, pitch, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of roll
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumRoll(void) const
    {
        return GetFieldNumValues(3, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of roll field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsRollValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns roll field
    // Units: radians
    // Comment: Range -PI to +PI
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetRoll(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(3, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set roll field
    // Units: radians
    // Comment: Range -PI to +PI
    ///////////////////////////////////////////////////////////////////////
    void SetRoll(FIT_UINT8 index, FIT_FLOAT32 roll)
    {
        SetFieldFLOAT32Value(3, roll, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of accel_lateral
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAccelLateral(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_lateral field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelLateralValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accel_lateral field
    // Units: m/s^2
    // Comment: Range -78.4 to +78.4 (-8 Gs to 8 Gs)
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAccelLateral(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_lateral field
    // Units: m/s^2
    // Comment: Range -78.4 to +78.4 (-8 Gs to 8 Gs)
    ///////////////////////////////////////////////////////////////////////
    void SetAccelLateral(FIT_UINT8 index, FIT_FLOAT32 accelLateral)
    {
        SetFieldFLOAT32Value(4, accelLateral, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of accel_normal
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAccelNormal(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_normal field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelNormalValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns accel_normal field
    // Units: m/s^2
    // Comment: Range -78.4 to +78.4 (-8 Gs to 8 Gs)
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAccelNormal(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_normal field
    // Units: m/s^2
    // Comment: Range -78.4 to +78.4 (-8 Gs to 8 Gs)
    ///////////////////////////////////////////////////////////////////////
    void SetAccelNormal(FIT_UINT8 index, FIT_FLOAT32 accelNormal)
    {
        SetFieldFLOAT32Value(5, accelNormal, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of turn_rate
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTurnRate(void) const
    {
        return GetFieldNumValues(6, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of turn_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTurnRateValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns turn_rate field
    // Units: radians/second
    // Comment: Range -8.727 to +8.727 (-500 degs/sec to +500 degs/sec)
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTurnRate(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(6, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set turn_rate field
    // Units: radians/second
    // Comment: Range -8.727 to +8.727 (-500 degs/sec to +500 degs/sec)
    ///////////////////////////////////////////////////////////////////////
    void SetTurnRate(FIT_UINT8 index, FIT_FLOAT32 turnRate)
    {
        SetFieldFLOAT32Value(6, turnRate, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of stage
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumStage(void) const
    {
        return GetFieldNumValues(7, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of stage field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStageValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns stage field
    ///////////////////////////////////////////////////////////////////////
    FIT_ATTITUDE_STAGE GetStage(FIT_UINT8 index) const
    {
        return GetFieldENUMValue(7, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set stage field
    ///////////////////////////////////////////////////////////////////////
    void SetStage(FIT_UINT8 index, FIT_ATTITUDE_STAGE stage)
    {
        SetFieldENUMValue(7, stage, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of attitude_stage_complete
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumAttitudeStageComplete(void) const
    {
        return GetFieldNumValues(8, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of attitude_stage_complete field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAttitudeStageCompleteValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns attitude_stage_complete field
    // Units: %
    // Comment: The percent complete of the current attitude stage.  Set to 0 for attitude stages 0, 1 and 2 and to 100 for attitude stage 3 by AHRS modules that do not support it.  Range - 100
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetAttitudeStageComplete(FIT_UINT8 index) const
    {
        return GetFieldUINT8Value(8, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set attitude_stage_complete field
    // Units: %
    // Comment: The percent complete of the current attitude stage.  Set to 0 for attitude stages 0, 1 and 2 and to 100 for attitude stage 3 by AHRS modules that do not support it.  Range - 100
    ///////////////////////////////////////////////////////////////////////
    void SetAttitudeStageComplete(FIT_UINT8 index, FIT_UINT8 attitudeStageComplete)
    {
        SetFieldUINT8Value(8, attitudeStageComplete, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of track
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumTrack(void) const
    {
        return GetFieldNumValues(9, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of track field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTrackValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns track field
    // Units: radians
    // Comment: Track Angle/Heading Range 0 - 2pi
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTrack(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(9, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set track field
    // Units: radians
    // Comment: Track Angle/Heading Range 0 - 2pi
    ///////////////////////////////////////////////////////////////////////
    void SetTrack(FIT_UINT8 index, FIT_FLOAT32 track)
    {
        SetFieldFLOAT32Value(9, track, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of validity
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumValidity(void) const
    {
        return GetFieldNumValues(10, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of validity field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsValidityValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns validity field
    ///////////////////////////////////////////////////////////////////////
    FIT_ATTITUDE_VALIDITY GetValidity(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(10, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set validity field
    ///////////////////////////////////////////////////////////////////////
    void SetValidity(FIT_UINT8 index, FIT_ATTITUDE_VALIDITY validity)
    {
        SetFieldUINT16Value(10, validity, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_AVIATION_ATTITUDE_MESG_HPP)
