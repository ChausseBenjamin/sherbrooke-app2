/* testData.h
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <benjamin@chausse.xyz> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return.
 * Benjamin Chausse
 * ----------------------------------------------------------------------------
 */

// Sample words {{{
// The following lists contains words of varying length. To test various edge
// cases, some given the following properties:
//   - Palindrome
//   - Capitalisation (at the beggining) -> mom, erudite
//   - Weird capitalisation (mid-word) -> bib, portmanteau
//   - Trailing spaces         -> sis, heightened, minim
//   - Spaces before the words -> sis, unholly, pop
//   - Non latin alphabet (greek & russian)
const char *wrd[] = {
  "abba", "betrothed", "deified", "elevation", "genesis", "kayak", "murdum",
  " pop", "relinquish", "stats", "thirst", "abhorrent", "accentuated",
  "agoraphobia", " aibohphobia", "anemia", "bIb", "bittersweet", "bob",
  "boredom", "calvary", "civic", "demetrius", "detartrated", "dewed", "dolomite",
  "dynasty", "enigmatic", "envy", "erUdite", "eve", "exhaulted", "galadriel",
  "genocide", "hannah", "heightened ", "horrendous", "initiation", "level",
  "madam", "malayalam", "minim ", "Mom", "mortified", "noon", "nun", "otto",
  "peep", "penitentiary", " polymorphism", "poRtmanteau", "quizzaciously",
  "racecar", "radar", "redder", "repaper", "rotator", "rotavator", "sagas",
  " sis ", "solos", "superlative", "tartigrade", "tattarrattat", "tenacity",
  "tenet", " unholly", "wow" "élévation", "μουσικότητα", "неандерталец",
};
// }}}
// Sample numbers {{{
/* The following list can be used to compare expected sine and cosine outputs
 * of the algorithm to pre-calculated values. The expected values were
 * generated with the `gen-trig-test.c` using the math.h library. They were
 * chosen so that the sample size would contain the following edge cases:
 *   - Common trigonometric circle identities (0°,30°,45°,60°,90°, etc...)
 *   - Negative values
 *   - Values surpassing 2π
 */
const double piValues[20][3] = {
// test-value  sin        cos
  { 0.000000,  0.000000,  1.000000}, // 0°
  { 0.523599,  0.500000,  0.866025}, // 30°
  { 0.785398,  0.707107,  0.707107}, // 45°
  { 1.047198,  0.866025,  0.500000}, // 60°
  { 1.570796,  1.000000, -0.000000}, // 90°
  { 2.094395,  0.866025, -0.500000}, // 120°
  { 2.356194,  0.707107, -0.707107}, // 135°
  { 2.617994,  0.500000, -0.866025}, // 150°
  { 3.141593, -0.000000, -1.000000}, // 180°
  { 3.665191, -0.500000, -0.866025}, // 210°
  { 3.926991, -0.707107, -0.707107}, // 225°
  { 4.188790, -0.866025, -0.500000}, // 240°
  { 4.712389, -1.000000,  0.000000}, // 270°
  { 5.235988, -0.866025,  0.500000}, // 300°
  { 5.497787, -0.707107,  0.707107}, // 315°
  { 5.759586, -0.500000,  0.866025}, // 330°
  { 7.853981,  1.000000,  0.000000}, // 450° (over 2pi -> sin=1)
  { 9.424778, -0.000000, -1.000000}, // 540° (over 2pi -> cos=1)
  {-7.853981, -1.000000,  0.000000}, // -90 negative value -> sin=-1°
  {-9.424778,  0.000000, -1.000000}  // -180 negative value -> cos=-1°
};
// }}}
// Sample matrices {{{
/* The following matrices may be used for testing. To test various edge cases
 * some were given the following properties:
 *   - Varying sizes (3x3, 5x3, 3x5)
 *   - Zero matrix
 *   - Identity matrix
 *
 */
const int mtrxA[3][3] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};

const int mtrxB[3][3] = {
  {3, 1, 4},
  {1, 5, 9},
  {2, 6, 5}
};

const int mtrxNULL[3][3] = {
  {0, 0, 0},
  {0, 0, 0},
  {0, 0, 0}
};

const int mtrxID[3][3] = {
  {1, 0, 0},
  {0, 1, 0},
  {0, 0, 1}
};

const int mtrxWide[3][5] = {
  {1,  2,  3,  4,  5},
  {6,  7,  8,  9,  10},
  {11, 12, 13, 14, 15}
};

const int mtrxTall[5][3] = {
  {1,  2,  3},
  {4,  5,  6},
  {7,  8,  9},
  {10, 11, 12},
  {13, 14, 15}
};

// }}}
