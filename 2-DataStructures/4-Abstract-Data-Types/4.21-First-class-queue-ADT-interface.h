template <class Item>
class QUEUE
  {
      private:
      //code
      public:
        QUEUE(int);
        QUEUE(const QUEUE&);
        QUEUE& operator=(const QUEUE&);
        ~QUEUE();
        int empty() const;
        void put(Item);
        Item get();
  };