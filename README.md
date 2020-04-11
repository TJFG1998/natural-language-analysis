**Natural Languges Analysis**

Natural Language Processing, a sub-area of ​​Artificial Intelligence, is dedicated to the study computational methods for the study of human languages, known as natural. One of the typical processes in the preparation of a text for its processing is the morphosyntactic labeling in which, at each word, a morphological category is associated (eg verb, noun, adjective) and also information additional morphological (eg number or gender in nouns, or person and number time in verbs).

This practical work intends to create a tool that is able to analyze any file already tagged with morphosyntactic information. This file consists of several lines, one for each word or punctuation mark. Each row consists of several columns, the first being matches the word of the original sentence, the second to its motto (root of the word) the third to its analysis
morphosyntactic. The last column includes the tool's certainty in relation to the analysis performed. The columns
are separated by a space character.

Consider the following example, from the annotation of the phrase “Now there is a dreadful thought!”:

                                        Now now RB 0.998694
                                        there there RB 1
                                        is be VBZ 1
                                        a to DT 0.998827
                                        dreadful dreadful JJ 1
                                        thought thought NN 0.0950141
                                        ! ! Fat 1

The application to develop must have:


1. Initially, read all the lines and save them in one or more dynamic data structures. At blank lines, and lines corresponding to orthographic signs can be ignored (that is, only lines referring to words should be considered).
The data structure to be used should be chosen so that it is possible to respond to the following questions;

2. Build a table of absolute frequencies, relative and accumulated, referring to the graded category used matical (third column). Display the table in ascending order of frequency absolute;

3. Build a table of absolute, relative and accumulated frequencies, referring to the size of the words in the text;

4. For each type of morphological analysis (third column), calculate based on the certainty measure of labeling (fourth column) your arithmetic mean and standard deviation;

5. Calculate the following measures of location and dispersion, related to the size of the words: average arithmetic, median, mode and standard deviation;

6. Based on the frequencies of the words (their number of occurrences), calculate the quartiles and implement a function that, given a word indicated by the user, allows obtaining the quartile to which it belongs;

7. Obtain the necessary data to construct a histogram of the probabilities (fourth column). Define the number of classes and the respective frequencies to be considered.
