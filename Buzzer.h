#include "UnorderedMap.h" 

#ifndef BUZZER_H_
#define BUZZER_H_

/**
 * @brief Note enumeration
 *
 * It should be implemented as keys to a dictionary for translation between note names and their
 * int values
 */
enum Notes{
C__, Cs__, D__, Ds__, E__, F__, Fs__, G__, Gs__, A__, As__, B__,
C_, Cs_, D_, Ds_, E_, F_, Fs_, G_, Gs_, A_, As_, B_,
C, Cs, D, Ds, E, F, Fs, G, Gs, A, As, B,
C2, Cs2, D2, Ds2, E2, F2, Fs2, G2, Gs2, A_2, As2, B2,
C3, Cs3, D3, Ds3, E3, F3, Fs3, G3, Gs3, A_3, As3, B3,
C4, Cs4, D4, Ds4, E4, F4, Fs4, G4, Gs4, A_4, As4, B4, B7, Sil,
C7, Cs7, D7, Ds7, E7, F7, Fs7, G7, Gs7, A_7, As7, B8, C8,
C5, Cs5, D5, Ds5, E5, F5, Fs5, G5, Gs5, A_5, As5, C6, B5
};
/**
 * @brief Lengths enumeration
 *
 * It should be implemented as keys to a dictionary for translation between length of notes and
 * their values.
 *
 */
enum Lengths{
Blanca,
Negra,
Redonda,
Corchea,
Semicorchea,
Fusa,
Semifusa,
CorcheaPlusSemi
};


// Especialización para Notes
template<>
struct KeyHash<Notes> {
    size_t operator()(const Notes& note) const {
        return static_cast<size_t>(note);
    }
};

// Especialización para Lengths
template<>
struct KeyHash<Lengths> {
    size_t operator()(const Lengths& length) const {
        return static_cast<size_t>(length);
    }
};


/**
 * @brief Class for easier handling of the buzzer
 *
 * It has all the methods and definitions necessary for only sending tones to the buzzer
 * from another classes, without worrying for other stuff.
 *
 */
class Buzzer{
    private:
        int buzzerPin;
        int tempo;

    public:
        Buzzer();
        /**
         * @brief Initializer
         *
         * @param buzzerPin pin of the buzzer
         * @param tempo value for the generation of the lengths
         */
        void attach(int buzzerPin, int tempo);
        /**
         * @brief Send a note to the buzzer to be played
         *
         * @param note Note to be played
         * @param length Length of the note
         *
         */

        /**
         * @brief Translates the note to its freq value
         *
         * @param note the note
         */
        int getNoteFrequency(Notes note);
        /**
         * @brief Map from notes to int values
         */
        UnorderedMap<Notes, int, KeyHash<Notes>> noteFrequencies;
        /**
         * @brief Translates the length figures to their duration according to the tempo
         *
         * @param length the musical figure
         */
        int getLength(Lengths length);
        /**
         * @brief Map for length durations
         */
        UnorderedMap<Lengths, double, KeyHash<Lengths>> lengthDurations;
        void note(Notes note, Lengths length);
        void setTempo(int tempo);
        int getTempo();
};

#endif // BUZZER_H_
