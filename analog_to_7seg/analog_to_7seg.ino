/*
 * Copyright (C) 2019  Matthias Paulmier
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

void
setup ()
{
  int i;
  for (i = 4; i <= 11; i++)
    pinMode (i, OUTPUT);
}

int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int dp = 4;

void
display1 (void)
{
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
}

void
display2 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
}

void
display3 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (g, HIGH);
}

void
display4 (void)
{
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);

}

void
display5 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
}

void
display6 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
}

void
display7 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
}

void
display8 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (f, HIGH);
}

void
display9 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (f, HIGH);
}

void
display0 (void)
{
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (f, HIGH);
}

void
clearDisplay (void)
{
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  digitalWrite (e, LOW);
  digitalWrite (f, LOW);
}

void
loop ()
{
  long value = analogRead (A0);
  long actualVal = map (value, 0, 1018, 0, 9);
  clearDisplay ();
  switch (actualVal)
    {
    case 0:
      display0 ();
      break;
    case 1:
      display1 ();
      break;
    case 2:
      display2 ();
      break;
    case 3:
      display3 ();
      break;
    case 4:
      display4 ();
      break;
    case 5:
      display5 ();
      break;
    case 6:
      display6 ();
      break;
    case 7:
      display7 ();
      break;
    case 8:
      display8 ();
      break;
    case 9:
      display9 ();
      break;
    }
  digitalWrite (dp, HIGH);
  delay (10);
  clearDisplay ();
}
