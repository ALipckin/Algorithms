class Complex
  {
      private:
        // Программный код, зависящий от реализации
      public:
        Complex(float,float);
        float Re() const;
        float Im() const;
        Complex& operator*=(Complex&);
  };