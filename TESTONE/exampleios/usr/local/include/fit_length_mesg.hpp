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


#if !defined(FIT_LENGTH_MESG_HPP)
#define FIT_LENGTH_MESG_HPP

#include "fit_mesg.hpp"
#include "fit_mesg_with_event.hpp"

namespace fit
{

class LengthMesg : public Mesg, public MesgWithEvent
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 Event = 0;
       static const FIT_UINT8 EventType = 1;
       static const FIT_UINT8 StartTime = 2;
       static const FIT_UINT8 TotalElapsedTime = 3;
       static const FIT_UINT8 TotalTimerTime = 4;
       static const FIT_UINT8 TotalStrokes = 5;
       static const FIT_UINT8 AvgSpeed = 6;
       static const FIT_UINT8 SwimStroke = 7;
       static const FIT_UINT8 AvgSwimmingCadence = 9;
       static const FIT_UINT8 EventGroup = 10;
       static const FIT_UINT8 TotalCalories = 11;
       static const FIT_UINT8 LengthType = 12;
       static const FIT_UINT8 PlayerScore = 18;
       static const FIT_UINT8 OpponentScore = 19;
       static const FIT_UINT8 StrokeCount = 20;
       static const FIT_UINT8 ZoneCount = 21;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    LengthMesg(void) : Mesg(Profile::MESG_LENGTH)
    {
    }

    LengthMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of message_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMessageIndexValid() const
    {
        const Field* field = GetField(254);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
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
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of event field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEventValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event field
    ///////////////////////////////////////////////////////////////////////
    FIT_EVENT GetEvent(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event field
    ///////////////////////////////////////////////////////////////////////
    void SetEvent(FIT_EVENT event)
    {
        SetFieldENUMValue(0, event, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of event_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEventTypeValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_EVENT_TYPE GetEventType(void) const
    {
        return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_type field
    ///////////////////////////////////////////////////////////////////////
    void SetEventType(FIT_EVENT_TYPE eventType)
    {
        SetFieldENUMValue(1, eventType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of start_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStartTimeValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_time field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetStartTime(void) const
    {
        return GetFieldUINT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_time field
    ///////////////////////////////////////////////////////////////////////
    void SetStartTime(FIT_DATE_TIME startTime)
    {
        SetFieldUINT32Value(2, startTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_elapsed_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalElapsedTimeValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalElapsedTime(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_elapsed_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalElapsedTime(FIT_FLOAT32 totalElapsedTime)
    {
        SetFieldFLOAT32Value(3, totalElapsedTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_timer_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalTimerTimeValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetTotalTimerTime(void) const
    {
        return GetFieldFLOAT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_timer_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTotalTimerTime(FIT_FLOAT32 totalTimerTime)
    {
        SetFieldFLOAT32Value(4, totalTimerTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_strokes field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalStrokesValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_strokes field
    // Units: strokes
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTotalStrokes(void) const
    {
        return GetFieldUINT16Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_strokes field
    // Units: strokes
    ///////////////////////////////////////////////////////////////////////
    void SetTotalStrokes(FIT_UINT16 totalStrokes)
    {
        SetFieldUINT16Value(5, totalStrokes, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_speed field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgSpeedValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgSpeed(void) const
    {
        return GetFieldFLOAT32Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetAvgSpeed(FIT_FLOAT32 avgSpeed)
    {
        SetFieldFLOAT32Value(6, avgSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of swim_stroke field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSwimStrokeValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns swim_stroke field
    // Units: swim_stroke
    ///////////////////////////////////////////////////////////////////////
    FIT_SWIM_STROKE GetSwimStroke(void) const
    {
        return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set swim_stroke field
    // Units: swim_stroke
    ///////////////////////////////////////////////////////////////////////
    void SetSwimStroke(FIT_SWIM_STROKE swimStroke)
    {
        SetFieldENUMValue(7, swimStroke, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_swimming_cadence field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgSwimmingCadenceValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_swimming_cadence field
    // Units: strokes/min
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetAvgSwimmingCadence(void) const
    {
        return GetFieldUINT8Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_swimming_cadence field
    // Units: strokes/min
    ///////////////////////////////////////////////////////////////////////
    void SetAvgSwimmingCadence(FIT_UINT8 avgSwimmingCadence)
    {
        SetFieldUINT8Value(9, avgSwimmingCadence, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of event_group field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEventGroupValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns event_group field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetEventGroup(void) const
    {
        return GetFieldUINT8Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set event_group field
    ///////////////////////////////////////////////////////////////////////
    void SetEventGroup(FIT_UINT8 eventGroup)
    {
        SetFieldUINT8Value(10, eventGroup, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of total_calories field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTotalCaloriesValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns total_calories field
    // Units: kcal
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTotalCalories(void) const
    {
        return GetFieldUINT16Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set total_calories field
    // Units: kcal
    ///////////////////////////////////////////////////////////////////////
    void SetTotalCalories(FIT_UINT16 totalCalories)
    {
        SetFieldUINT16Value(11, totalCalories, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of length_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLengthTypeValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns length_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_LENGTH_TYPE GetLengthType(void) const
    {
        return GetFieldENUMValue(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set length_type field
    ///////////////////////////////////////////////////////////////////////
    void SetLengthType(FIT_LENGTH_TYPE lengthType)
    {
        SetFieldENUMValue(12, lengthType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of player_score field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPlayerScoreValid() const
    {
        const Field* field = GetField(18);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns player_score field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetPlayerScore(void) const
    {
        return GetFieldUINT16Value(18, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set player_score field
    ///////////////////////////////////////////////////////////////////////
    void SetPlayerScore(FIT_UINT16 playerScore)
    {
        SetFieldUINT16Value(18, playerScore, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of opponent_score field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOpponentScoreValid() const
    {
        const Field* field = GetField(19);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns opponent_score field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetOpponentScore(void) const
    {
        return GetFieldUINT16Value(19, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set opponent_score field
    ///////////////////////////////////////////////////////////////////////
    void SetOpponentScore(FIT_UINT16 opponentScore)
    {
        SetFieldUINT16Value(19, opponentScore, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of stroke_count
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumStrokeCount(void) const
    {
        return GetFieldNumValues(20, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of stroke_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStrokeCountValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(20);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns stroke_count field
    // Units: counts
    // Comment: stroke_type enum used as the index
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetStrokeCount(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(20, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set stroke_count field
    // Units: counts
    // Comment: stroke_type enum used as the index
    ///////////////////////////////////////////////////////////////////////
    void SetStrokeCount(FIT_UINT8 index, FIT_UINT16 strokeCount)
    {
        SetFieldUINT16Value(20, strokeCount, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of zone_count
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumZoneCount(void) const
    {
        return GetFieldNumValues(21, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of zone_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsZoneCountValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(21);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns zone_count field
    // Units: counts
    // Comment: zone number used as the index
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetZoneCount(FIT_UINT8 index) const
    {
        return GetFieldUINT16Value(21, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set zone_count field
    // Units: counts
    // Comment: zone number used as the index
    ///////////////////////////////////////////////////////////////////////
    void SetZoneCount(FIT_UINT8 index, FIT_UINT16 zoneCount)
    {
        SetFieldUINT16Value(21, zoneCount, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_LENGTH_MESG_HPP)
