class Equipment {
  public:
    virtual ~Equipment();

    const char* Name() { return _name; }

    virtual int Power();
    virtual int Price();

    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);

  protected:
    Equipment(const char*);

  private:
    const char* _name;  
}
