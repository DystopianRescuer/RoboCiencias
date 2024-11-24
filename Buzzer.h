#ifndef BUZZER_H_
#define BUZZER_H_



/**
 * @brief Note enumeration
 *
 * It should be implemented as a dictionary for translation between note names and their
 * int values
 */
enum Notes;
/**
 * @brief Lengths enumeration
 *
 * It should be implemented as a dictionary for translation between length of notes and
 * their values.
 *
 * Required lengths:
 *
 * Blanca
 * Negra
 * Redonda
 * Corchea
 * Semicorchea
 * Fusa
 * Semifusa
 *
 */
enum Lengths;
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
        Buzzer();

    public:
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
        void note(Notes note, Lengths length);
        void setTempo(int tempo);
        int getTempo();
};

#endif // BUZZER_H_
